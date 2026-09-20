class Solution {
public:
    int reverseDegree(string s) {
        
         int degree = 0;

    for (int i = 0; i < s.size(); i++) {
        int reverse_pos = 26 - (s[i] - 'a'); 
        degree += reverse_pos * (i + 1);     
    }

    return degree;    
    }
};