class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int cnt = 1;
        int maxLen = 1;

        if(nums.size() == 0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] == nums[i - 1] + 1) {
                cnt++;
            } else {
                maxLen = max(maxLen, cnt);
                cnt = 1;
            }
        }

        return max(cnt,maxLen);
    }
};