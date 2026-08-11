class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];
        // int j = -1;

        unordered_set<int> st;

        for(auto i : nums){
            st.insert(i);
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        while (st.count(sum)) {
            sum += 1;
        }

        return sum;
    }
};