class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max = nums[0];
        int curr_sum = 0;
        for (auto num : nums) {
            curr_sum += num;
            curr_max = max(curr_max, curr_sum);

            if (curr_sum < 0) {
                curr_sum = 0;
            }
        }
        return curr_max;
    }
};