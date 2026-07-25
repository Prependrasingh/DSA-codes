class Solution {
public:
    int ParseDigit(int n){
        if(n < 10)return n;

        vector<int> ans;

        while(n > 0){
            int digit = n % 10;
            ans.push_back(digit);
            n = n / 10;
        }

        sort(begin(ans) , end(ans));

        int x = ans[ans.size() - 1];
        int y = ans[ans.size() - 2];

        return x*y;
    }
    int maxProduct(int n) {
        return ParseDigit(n);
    }
};