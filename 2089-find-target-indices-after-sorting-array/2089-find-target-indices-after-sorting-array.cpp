class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin() , nums.end());

        vector<int> found;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                found.push_back(i);
            }
        }
        sort(found.begin() , found.end());

        return found;
    }
};