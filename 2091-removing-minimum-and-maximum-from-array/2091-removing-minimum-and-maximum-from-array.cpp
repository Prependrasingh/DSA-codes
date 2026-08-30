class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mn = *min_element(nums.begin() , nums.end());
        int mx = *max_element(nums.begin() , nums.end());
        int n = nums.size();

        int mnInd = 0;
        int mxInd = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == mn){
                mnInd = i;
            }
            if(nums[i] == mx){
                mxInd = i;
            }
        }
        int x = min(mnInd, mxInd), y = max(mnInd, mxInd);
        return min({y + 1, n - x, x + 1 + n - y});
    }
};