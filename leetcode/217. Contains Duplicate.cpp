#include <algorithm>

class Solution {
   public:
    bool flag = false;
    bool containsDuplicate(vector<int>& nums) {
        // sort array first
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) flag = true;
        }
        return flag;
    }
};