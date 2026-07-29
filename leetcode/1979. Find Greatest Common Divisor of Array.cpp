
#include <iostream>

class Solution {
public:
    int GCD(int first, int second) {
        while (second != 0) {
            int reminder = first % second;
            first = second;
            second = reminder;
        }
        return first;
    }

    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min)
                min = nums[i];

            if (nums[i] > max)
                max = nums[i];
        }

        return GCD(min, max);
    }
};