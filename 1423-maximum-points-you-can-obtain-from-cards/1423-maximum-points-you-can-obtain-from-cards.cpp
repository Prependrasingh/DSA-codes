class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        int Lsum = 0 , Rsum = 0 , maxSum = 0 , rInd = nums.size() - 1;

        for(int i = 0 ; i < k ; i++){
            Lsum += nums[i];
        }

        maxSum = Lsum;

        for(int i = k - 1 ; i >= 0 ; i--){
            Lsum -= nums[i];
            Rsum += nums[rInd--];
            maxSum = max(maxSum , Lsum + Rsum);
        }
        return maxSum;
    }
};