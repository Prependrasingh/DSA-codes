class Solution {
public:
    bool checkDivisibility(int n) {

        string s = to_string(n);

        int sum = 0;
        int prod = 1;

       for (char ch : s) {
            int digit = ch - '0'; 
            sum += digit;
            prod *= digit;
        }

        int total = sum + prod;

        if(total == 0)return false;

        return (n % total == 0);
    }
};