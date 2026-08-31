class Solution {
public:
    int trap(vector<int>& nums) {

        int l = 0 , r = nums.size() - 1;    
        int Lmax = 0 , Rmax = 0;
        int total = 0;

        while(l < r){
            if(nums[l] <= nums[r]){
                if(Lmax > nums[l]){
                    total += Lmax - nums[l];
                }
                else{
                    Lmax = nums[l];
                }
                l++;
            }
            else{
                if(Rmax > nums[r]){
                    total += Rmax - nums[r];
                }
                else{
                    Rmax = nums[r];
                }
                r--;
            }
        } 

        return total;

        
    }
};