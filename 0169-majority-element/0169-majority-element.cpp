class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0;
        int el = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el)cnt++;
            else{
                cnt--;
            }
        }

        int el_cnt = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == el)el_cnt++;
        }

        if(el_cnt > nums.size()/2){
            return el;
        }
        else return -1;
    }
};