class Solution {
public:
    long long maximumValue(int n, int s, int m) {

        // vector<long long> ans(n);

        // ans.push_back(s);

        // if(n == 1)return s;
        // if(n == 2)return s + m;

        // for(int i = 1 ; i < n ; i++){
        //     if(i % 2 != 0){
        //         ans.push_back(ans.back() + m);
        //     }
        //     if(i % 2 == 0){
        //         ans.push_back(ans.back() - 1);
        //     }

        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;

        // return *max_element(ans.begin() , ans.end());

        if (n == 1) return s;

        long long plusOperations = n / 2;

        return 1LL * s + plusOperations * m - (plusOperations - 1);
    }
};