class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        int remL = 0, remR = 0;
        for (char c : s) {
            if (c == '(') {
                remL++;
            } else if (c == ')') {
                if (remL > 0) remL--;
                else remR++;
            }
        }

        vector<string> ans;
        string path = "";
        dfs(0, 0, remL, remR, s, path, ans);
        return ans;
    }

private:
    void dfs(int index, int balance, int remL, int remR, const string& s, string& path, vector<string>& ans) {
        if (balance < 0) return;

        if (index == s.size()) {
            if (remL == 0 && remR == 0 && balance == 0) {
                ans.push_back(path);
            }
            return;
        }

        char c = s[index];

        if (c == '(') {
            int end = index;
            while (end < s.size() && s[end] == '(') end++;
            int count = end - index;

            for (int k = 0; k <= count; k++) {
                int removed = count - k;
                if (removed <= remL) {
                    for (int i = 0; i < k; i++) path.push_back('(');
                    dfs(end, balance + k, remL - removed, remR, s, path, ans);
                    for (int i = 0; i < k; i++) path.pop_back();
                }
            }
        } else if (c == ')') {
            int end = index;
            while (end < s.size() && s[end] == ')') end++;
            int count = end - index;

            for (int k = 0; k <= count; k++) {
                int removed = count - k;
                if (removed <= remR && balance - k >= 0) {
                    for (int i = 0; i < k; i++) path.push_back(')');
                    dfs(end, balance - k, remL, remR - removed, s, path, ans);
                    for (int i = 0; i < k; i++) path.pop_back();
                }
            }
        } else {
            path.push_back(c);
            dfs(index + 1, balance, remL, remR, s, path, ans);
            path.pop_back();
        }
    }
};