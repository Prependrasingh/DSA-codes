class Solution {
public:
    int minimumPushes(string word) {

        vector<int> freq(26 , 0);

        for(auto c : word){
            freq[c - 'a']++;
        }

        sort(freq.rbegin() , freq.rend());

        int total = 0;

        for(int i = 0 ; i < 26 ; i++){
            if(freq[i] == 0){
                break;
            }

            total += (i/8 + 1) * freq[i];
        }

        return total;
    }
};