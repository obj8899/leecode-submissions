class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int depth = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth++;
            } else {
                depth--;
                // Check if this ')' is closing the innermost "()"
                if (s[i - 1] == '(') {
                    score += 1 << depth; // Equivalent to 2^depth
                }
            }
        }  
        return score;
    }
};