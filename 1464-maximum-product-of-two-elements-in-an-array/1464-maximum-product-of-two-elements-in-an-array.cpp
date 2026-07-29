class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int maxi;
                int hero=0;
        for(int i=0; i<nums.size(); i++){
            
            for(int j=i+1;j<nums.size(); j++){
                
                maxi=(nums[i]-1)*(nums[j]-1);
                if(maxi>hero){
                    hero =maxi;
                }
            }
        }
         return hero;

    }                                          
};