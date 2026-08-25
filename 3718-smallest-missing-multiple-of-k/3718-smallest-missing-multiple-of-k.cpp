class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        for(int i = 1 ; i <= 102; i++){
            int dig = k*i;
            if(find(nums.begin() , nums.end() , dig) == nums.end()){
                return dig;
            }
        }
        return -1;
    }
};