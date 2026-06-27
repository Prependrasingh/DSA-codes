class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long, int> freq;
        int ones = 0;

        for (auto it : nums) {
            if (it == 1) {
                ones++;
            } else {
                freq[it]++;
            }
        }
        if (ones != 0 && ones % 2 == 0) {
            ones--;
        }

        int ans = ones;

        for (auto it : freq) {
            long long val = it.first;
            long long base = sqrt(val);

            if ((base * base) == val && freq.count(base) && freq[base] > 1) {
                continue;
            }

            int cnt = 0;

            while (freq.count(val) && freq[val] > 1) {
                cnt += 2;
                val = (val * 1LL * val);
            }
            if (freq[val] == 1) {
                cnt++;
            } else {
                cnt--;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};