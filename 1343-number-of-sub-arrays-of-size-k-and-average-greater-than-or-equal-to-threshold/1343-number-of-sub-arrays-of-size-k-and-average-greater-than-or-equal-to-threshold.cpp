class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count =0;
        int sum =0;

        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        int avg = sum/k;
        if(avg>=threshold){
            count++;
        }

        for(int  right =k; right<n; right++){
            int left = right -k;

            sum = sum - arr[left] + arr[right];
            avg = sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};