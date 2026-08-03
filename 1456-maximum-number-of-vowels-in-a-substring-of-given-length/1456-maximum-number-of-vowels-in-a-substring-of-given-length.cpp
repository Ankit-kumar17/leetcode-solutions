class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {

        int count = 0;
        int ans = 0;

        // First window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        ans = count;

        // Slide the window
        for (int i = k; i < s.length(); i++) {

            // Remove left character
            if (isVowel(s[i - k])) {
                count--;
            }

            // Add right character
            if (isVowel(s[i])) {
                count++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};