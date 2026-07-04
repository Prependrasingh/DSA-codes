class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {

        int middle = nums.size()/2;
        int middleEl = nums[middle];

        int cnt = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == middleEl)cnt++;
            if(cnt > 1)return false;
        }

        return true;
        
    }
};