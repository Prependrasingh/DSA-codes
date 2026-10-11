class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        long long sum = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums.size() % (i+1) == 0){
                int num = pow(nums[i] , 2);
                sum += num;
            }
        }

        return sum;
    }
};