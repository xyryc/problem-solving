import java.util.Arrays;

class Solution {
    public int missingMultiple(int[] nums, int k) {
        Arrays.sort(nums);

        int multiple = k;
        int i = 0;

        while (i < nums.length) {
            if (nums[i] < multiple) {
                i++;
            } else if (nums[i] == multiple) {
                multiple += k;
                i++;
            } else {
                return multiple;
            }
        }

        return multiple;
    }
}
