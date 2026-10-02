class Solution {
public:
    void print(int open , int close , string s , vector<string>& res , int n){
        if(open == close && open +  close == n * 2){
            res.push_back(s);
            return;
        }

        if(open < n){
            print(open + 1 , close , s + "(", res , n);
        }
        if(close < open){
            print(open , close + 1 , s + ")" , res , n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        print(0 , 0 , "" , res , n);
        return res;
    }
};