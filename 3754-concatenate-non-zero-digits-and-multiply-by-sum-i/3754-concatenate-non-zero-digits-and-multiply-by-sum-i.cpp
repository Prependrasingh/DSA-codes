class Solution {
public:
    long long ConcatSum(int n) {
        int sum = 0;
        while (n != 0) {
            int mod = n % 10;
            sum += mod;
            n = n / 10;
        }
        return sum;
    }
    long long sumAndMultiply(int n) {

        if(n <= 1)return n;
        string dig = to_string(n);
        string ans = "";

        for (int i = 0; i < dig.length(); i++) {
            if (dig[i] != '0') {
                ans.push_back(dig[i]);
            }
        }

        long long sum = ConcatSum(n);

        long long num = stol(ans);

        cout<<num<<" "<<sum<<endl;

        return (1LL * num * sum);
    }
};