class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int product =1;
        int org = n;
        int digit;
        while(n>0){
           digit = n%10;
            sum += digit;
            product *= digit;
            n = n / 10; 
        }
        int total = sum + product;
        if(org%total==0){
            return true;
        }
  
            return false;
       
      
    }
};