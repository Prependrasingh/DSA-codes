class Solution {
public:
    double average(vector<int>& nums) {

        double mini = *min_element(nums.begin() , nums.end());
        double maxi = *max_element(nums.begin() , nums.end());
        double ans = 0.0;

        int cntMin = count(nums.begin() , nums.end() , mini);
        int cntMax = count(nums.begin() , nums.end() , maxi);


        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != mini && nums[i] != maxi){
                ans += nums[i];
            }
        }

        double n = nums.size() - (cntMin + cntMax);

        return ans / n;


    }
};