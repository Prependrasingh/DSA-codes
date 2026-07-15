class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int maxEven = 0 , maxOdd = 0;

        for(int i = 1 ; i <= 2*n ; i++){
            if(i % 2 == 0)maxEven += i;
            else maxOdd += i;
        }

        cout<<maxEven<<" "<<maxOdd<<endl;
        return __gcd(maxOdd , maxEven);
        
    }
};