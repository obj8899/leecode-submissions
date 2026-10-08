class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int equili = 0;

        for (char c : s) {
            if (c == '(') {
                if (equili > 0) {
                    result += c;
                }
                equili++;
            } else {
                equili--;
                if (equili > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};