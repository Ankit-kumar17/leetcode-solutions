// class Solution {
// public:
//     vector<int> decrypt(vector<int>& code, int k) {
//         int n = code.size();
//         vector<int> ans;

//         for (int i = 0; i < n; i++) {
//             int sum = 0;

//             if (k > 0) {
//                 for (int j = 1; j <= k; j++) {
//                     sum += code[(i + j) % n];
//                     int left = code[(i+j)%n];
//                     int right = code[(i+k+1)%n]

//                     sum-=code[left];
//                     sum+=code[right];
//                     ans.push_back(sum);
//                 }
//             }
//             else if (k < 0) {
//                 for (int j = -1; j >= k; j--) {
//                     sum += code[(i + j + n) % n];
//                     int left=code[(i+k)%n];
//                     int right = code[(i+k+2)%n];
//                      sum-=code[left];
//                     sum+=code[right];
//                     ans.push_back(sum);
//                 }
//             }

//             ans.push_back(sum);
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if (k == 0) {
            return ans;
        }

        if (k > 0) {

            // First window ka sum
            int sum = 0;

            for (int j = 1; j <= k; j++) {
                sum += code[j % n];
            }

            ans[0] = sum;

            // Window slide
            for (int i = 1; i < n; i++) {

                // Purana element remove
                sum -= code[i % n];

                // Naya element add
                sum += code[(i + k) % n];

                ans[i] = sum;
            }
        }

        else {

            // k negative hai
            int sum = 0;

            // First window: previous -k elements
            for (int j = 1; j <= -k; j++) {
                sum += code[(n - j) % n];
            }

            ans[0] = sum;

            // Window slide
            for (int i = 1; i < n; i++) {

                // Purana element remove
                sum -= code[(i - 1 - (-k) + n) % n];

                // Naya previous element add
                sum += code[(i - 1 + n) % n];

                ans[i] = sum;
            }
        }

        return ans;
    }
};