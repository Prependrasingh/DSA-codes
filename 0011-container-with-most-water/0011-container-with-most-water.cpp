class Solution {
public:
    int maxArea(vector<int>& nums) {

        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int maxArea = 0;

        while(left < right){
             maxArea = max(maxArea , (right - left) * min(nums[left] , nums[right]));

            if(nums[left]< nums[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};