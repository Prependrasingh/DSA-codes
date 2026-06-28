class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {

        sort(nums.begin() , nums.end());
        int ones = count(nums.begin() , nums.end() , 1);

        if(ones == 0)nums[0] = 1;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(abs(nums[i] - nums[i+1]) > 1){
                nums[i+1] = nums[i] + 1;
            }
            else{
                continue;
            }
        }
        return *max_element(nums.begin() , nums.end());
    }
};