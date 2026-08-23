class Solution {
public:

    int rob(vector<int>& nums, int start, int end) {
        int prev = 0;
        int curr = 0;

        for (int i = start; i <= end; i++) {
            int temp = curr;

            curr = max(curr, prev + nums[i]);

            prev = temp;
        }

        return curr;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        int a = rob(nums, 0, n - 2);
        int b = rob(nums, 1, n - 1); 

        return max(a, b);
    }
};
