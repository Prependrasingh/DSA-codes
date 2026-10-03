class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0, sum = 0, n = s.size();

        // Left to right pass
        int left = 0, right = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right) ans = max(ans, left + right);
            else if (right > left)  left = right = 0;
            
        }

        // Right to left pass
        left = right = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right) ans = max(ans, right + left); 
            else if (left > right) left = right = 0; 
            
        }

        return ans;
    }
};