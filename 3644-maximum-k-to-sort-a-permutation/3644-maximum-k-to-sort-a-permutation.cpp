class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        bool is_sorted = true;

        for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                is_sorted = false;
                result &= i;
            }
        }

        if (is_sorted) {
            return 0;
        } else {
            return result;
        }
    }
};