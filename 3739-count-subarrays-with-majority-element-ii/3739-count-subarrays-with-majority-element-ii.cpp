class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {

        long long cnt = 0, validLeftPoints = 0;
        map<long, long> freq;
        long long cumSum = 0;
        freq[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                validLeftPoints += freq[cumSum];
                cumSum += 1;
            } else {
                cumSum -= 1;
                validLeftPoints -= freq[cumSum];
            }
            freq[cumSum] += 1;
            cnt += validLeftPoints;
        }
        return cnt;
    }
};