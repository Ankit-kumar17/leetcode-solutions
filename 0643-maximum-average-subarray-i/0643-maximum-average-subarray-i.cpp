class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        int n=nums.size();
        for(int i=0; i<k; i++){
            sum+=nums[i];   
        }
        double avg = (double)sum/k;
        double maxavg = avg;

        for(int right = k; right<n; right++){
           int left = right-k;

            sum -=  nums[left];
            sum += nums[right];
            avg = (double)sum/k;
            if(avg>maxavg){
                maxavg =avg;
            }

        }
        return maxavg;
    }
};