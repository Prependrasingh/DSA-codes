class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        int Min_sum = INT_MAX;
        int n = nums.size();

        for (int left = 0; left < n; left++) {

            int sum = 0;

            for (int right = left; right < n && right - left + 1 <= r; right++) {

                sum += nums[right];

                int len = right - left + 1;

                if (len >= l && sum > 0) {
                    Min_sum = min(Min_sum, sum);
                }
            }
        }

        return Min_sum == INT_MAX ? -1 : Min_sum;
    }
};