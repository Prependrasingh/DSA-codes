class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        sort(v.begin() , v.end());

        string one = v[0];
        string two = v[v.size() - 1];

        string ans = "";

        for(int i = 0 ; i < min(one.length() , two.length()) ; i++){
            if(one[i] != two[i]){
                break;
            }
            else{
                ans += one[i];
            }
        }

        return ans;
    }
};