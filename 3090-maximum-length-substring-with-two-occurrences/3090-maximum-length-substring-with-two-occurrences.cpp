class Solution {
public:
    int maximumLengthSubstring(string s) {

        map<char,int>freq;
        int len = INT_MIN;
        int start = 0;

        for(int end = 0 ; end < s.length() ; end++){
            ++freq[s[end] - 'a'];
            while(freq[s[end] - 'a'] > 2){
                --freq[s[start] - 'a'];
                start++;
            }

            len = max(len , end - start + 1);
        }

        return len;
        
    }
};