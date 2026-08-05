class Solution {
public:
  bool isvowel(char ch){
                return ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';}
    int maxVowels(string s, int k) {
        int n =s.size();
        int count=0;
        for(int i=0; i<k; i++){
           
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
            
        }
        int maxcount = count;

        for(int right = k; right<n; right++){
            int left = right - k;
          
            if(isvowel(s[left])){
                count--;
            }
            if(isvowel(s[right])){
                count++;
            
            };
if(count>maxcount){
    maxcount=count;
}

        }
        return maxcount;
    }
};