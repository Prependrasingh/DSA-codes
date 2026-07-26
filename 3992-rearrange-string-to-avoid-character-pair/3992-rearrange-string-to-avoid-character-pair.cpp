class Solution {
public:
    string rearrangeString(string s, char x, char y) {

        string ans = "";

        for(auto ch : s){
            if(ch == y)ans.push_back(ch);
        }

        for(auto ch : s){
            if(ch != y)ans.push_back(ch);
        }
        
        return ans;
    }
};