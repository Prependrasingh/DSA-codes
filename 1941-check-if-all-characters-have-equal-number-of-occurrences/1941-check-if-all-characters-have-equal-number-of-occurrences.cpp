class Solution {
public:
    bool areOccurrencesEqual(string s) {

        map<char,int> mpp;

        for(auto i : s){
            mpp[i]++;
        }

        set<int> cnt;

        for(auto i : mpp){
            cnt.insert(i.second);
        }

        if(cnt.size() > 1){
            return false;
        }

        return true;
        
    }
};