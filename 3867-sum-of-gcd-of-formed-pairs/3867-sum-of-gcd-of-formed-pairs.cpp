class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        vector<int>ans;
        int mx = nums[0];

        for(int i = 0 ; i < nums.size() ; i++){
            mx = max(mx , nums[i]);
            int gcd = __gcd(mx , nums[i]);
            ans.push_back(gcd);
        }

        sort(begin(ans) , end(ans));

        long long gcdSUM = 0;

        int left = 0 , right = ans.size()-1;

        while(left < right){
            int gcd = __gcd(ans[left++] , ans[right--]);
            gcdSUM += gcd;
        }   

        return gcdSUM;     
    }
};