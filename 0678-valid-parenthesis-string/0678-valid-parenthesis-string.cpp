class Solution {
public:
    bool checkValidString(string s) {
        int loww = 0;
        int high = 0;
        for (char c : s) {
            if (c == '(') {
                loww++;
                high++;
            }
            else if (c == ')') {
                loww--;
                high--;
            }
            else {
                loww--;
                high++;
            }
            loww = max(0, loww);
            if (high < 0)
                return false;
        }
        return loww == 0;
    }
};