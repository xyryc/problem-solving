class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found = false;
        vector<int> results = {};
        for (int i = 0; i < nums.size(); i++) {
            int flag = target - nums[i];
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[j] == flag) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
