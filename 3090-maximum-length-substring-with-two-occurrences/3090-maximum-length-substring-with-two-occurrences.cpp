class Solution {
public:
    int maximumLengthSubstring(string s) {

        map<char,int>freq;
        int len = INT_MIN;
        int start = 0;

        for(int end = 0 ; end < s.length() ; end++){
            int ch = s[end] - 'a';
            ++freq[ch];
            while(freq[ch] > 2){
                int ch2 = s[start] - 'a';
                --freq[ch2];
                start++;
            }

            len = max(len , end - start + 1);
        }

        return len;
        
    }
};