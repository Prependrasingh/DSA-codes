class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        sort(v.begin(), v.end());
        string ans = "";

        string s1 = v[0];
        string s2 = v[v.size() - 1];

        for (int i = 0; i < min(s1.size(), s2.size()); i++) {
            if (s1[i] != s2[i]) {
                break;
            } else {
                ans.push_back(s1[i]);
            }
        }
        return ans;
    }
};