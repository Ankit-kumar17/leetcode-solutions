class Solution {
public:

    void solve(vector<int>& nums,
               vector<vector<int>>& ans,
               vector<int>& current,
               vector<bool>& used) {

        if (current.size() == nums.size()) {
            ans.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i]) {
                continue;
            }

            current.push_back(nums[i]);
            used[i] = true;

            solve(nums, ans, current, used);

            current.pop_back();
            used[i] = false;
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> used(nums.size(), false);

        solve(nums, ans, current, used);

        return ans;
    }
};