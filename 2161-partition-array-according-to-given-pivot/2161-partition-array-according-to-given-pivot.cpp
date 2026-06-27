class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int>left , middle , right , ans;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < pivot)left.push_back(nums[i]);
            else if(nums[i] == pivot)middle.push_back(nums[i]);
            else right.push_back(nums[i]);
        }

        left.insert(left.end() , middle.begin() , middle.end());
        left.insert(left.end() , right.begin() , right.end());

        for(auto i : left){
            ans.push_back(i);
        }

        return ans;

        
    }
};