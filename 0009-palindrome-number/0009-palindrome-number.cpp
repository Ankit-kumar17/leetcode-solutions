class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long rev =  0;
        
        if(x<0){
            return false;
        }
        while(x>0){
            int digit = x%10;
            //  if(rev<= INT_MAX && rev>= INT_MIN){
               
            //  }
            rev=rev*10+digit;
           
            x=x/10;
        }
        if(rev==original){
            return true;
        }
        else{
            return false;
        }
        
    }
};