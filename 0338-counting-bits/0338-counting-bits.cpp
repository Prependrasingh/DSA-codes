class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ANS;
        ANS.push_back(0);

        for (int i = 1; i <= n; i++) {
            int ans = 0;
            int num = i;
            while (num > 0) {
                int dig = num % 2;
                if(dig == 1)ans++;
                num = num / 2;
            }
            ANS.push_back(ans);
        }

        return ANS;
    }
};