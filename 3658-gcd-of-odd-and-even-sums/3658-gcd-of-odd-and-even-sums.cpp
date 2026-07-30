class Solution {
public:
    int gcdOfOddEvenSums(int n) {
      int oddSum=0;
      int evenSum=0;
      int odd=1;
      int even=2;
      for(int i=0; i<n; i++){
        oddSum += odd;
        odd+=2;

        evenSum += even;
        even+=2;
      }
     return gcd(oddSum,evenSum);
    }
};