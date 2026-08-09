class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.rbegin() , prices.rend());
        sort(rbegin(discounts) , rend(discounts));

        double ans = 0.0;

        for(int i = 0 ; i < min(prices.size() , discounts.size()) ; i++){
            int discount = prices[i] * (100 - discounts[i]);
            double price = discount / 100.0;

            ans += price;
        }

        int n = min(prices.size() , discounts.size());

        for(int i = n  ; i < prices.size() ; i++){
            ans += prices[i];
        }

        return ans;
        
    }
};