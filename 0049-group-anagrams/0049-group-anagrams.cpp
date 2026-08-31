class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;

        map<string , vector<string>> mpp;

        for(auto i : strs){
            string word = i;
            sort(word.begin() , word.end());
            mpp[word].push_back(i);
        }

        for(auto i : mpp){
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
};