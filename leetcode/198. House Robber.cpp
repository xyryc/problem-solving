class Solution {
public:
    int rob(vector<int>& nums) {

        if (nums.size() == 1)
            return nums[0];

        int last2 = nums[0];
        int last1 = max(nums[0], nums[1]);

        for (int i = 2; i < nums.size(); i++) {

            int rob = last2 + nums[i];
            int skip = last1;

            int current = max(rob, skip);

            last2 = last1;
            last1 = current;
        }

        return last1;
    }
};