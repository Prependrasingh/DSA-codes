class Solution {
public:
    bool prodSum(int n, int t) {

        if (n == 10 || n == 20 || n == 30 || n == 40 || n == 50 || n == 60 ||
            n == 70 || n == 80 || n == 90 || n == 100) {
            return true;
        }
        int prod = 1;

        while (n) {
            int rem = n % 10;
            prod *= rem;
            n = n / 10;
        }

        if (prod == 0 && t == 2) {
            return n;
        }

        if (prod % t == 0) {
            return true;
        }

        cout << prod << endl;

        return false;
    };
    int smallestNumber(int n, int t) {

        for (int i = n; i <= 100; i++) {
            if (prodSum(i, t)) {
                return i;
            }
        }

        return 0;
    }
};