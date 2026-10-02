class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        backtrack(0, 0, n, current, result);
        return result;
    }

private:
    void backtrack(int open, int close, int max_pairs, string& current, vector<string>& result) {
        // Base case: we've placed all 2 * n brackets
        if (current.length() == max_pairs * 2) {
            result.push_back(current);
            return;
        }

        // Add '(' if we still have available opening brackets
        if (open < max_pairs) {
            current.push_back('(');
            backtrack(open + 1, close, max_pairs, current, result);
            current.pop_back(); // Backtrack
        }

        // Add ')' only if it will not exceed the number of open brackets
        if (close < open) {
            current.push_back(')');
            backtrack(open, close + 1, max_pairs, current, result);
            current.pop_back(); // Backtrack
        }
    }
};