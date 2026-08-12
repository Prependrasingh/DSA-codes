class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int len = 0, start = -1, end = 0;
        map<int, int> freq;

        while (end < nums.size()) {
            freq[nums[end]]++;
            while (freq[nums[end]] > k) {
                start++;
                freq[nums[start]]--;
            }
            len = max(len, (end - start));
            end++;
        }
        return len;
    }
};