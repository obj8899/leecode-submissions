class Solution {
public:
    bool isValid(std::string s) {
        // Map closing brackets to their corresponding opening brackets
        std::unordered_map<char, char> bracketMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        std::stack<char> st;
        
        for (char c : s) {
            // If the character is a closing bracket
            if (bracketMap.count(c)) {
                // Check if stack is empty or the top element doesn't match
                if (st.empty() || st.top() != bracketMap[c]) {
                    return false;
                }
                st.pop(); // Valid match found, remove the opening bracket
            } else {
                // If it's an opening bracket, push it to the stack
                st.push(c);
            }
        }
        
        // Return true only if all opening brackets have been matched and popped
        return st.empty();
    }
};
