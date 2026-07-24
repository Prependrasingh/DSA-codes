class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        int n = nums.size();
        unordered_set<long long> st1;
        unordered_set<long long> st2;

        if(n == 1)return 1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int ans = (nums[i] ^ nums[j]);
                st1.insert(ans);
            }
        }

        for (auto i : st1) {
            for (int j = 0; j < n; j++) {
                int ans = (nums[j] ^ i);
                st2.insert(ans);
            }
        }
        return st2.size();
    }
};