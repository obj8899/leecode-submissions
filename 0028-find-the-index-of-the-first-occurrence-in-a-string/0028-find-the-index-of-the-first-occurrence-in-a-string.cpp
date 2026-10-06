class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m > n) 
        return -1;
        string veeru = "";
        for (int i = 0; i < n; i++) {
            veeru.push_back(haystack[i]);
            if (veeru.size() > m) {
                veeru.erase(veeru.begin());
            }
            if (veeru.size() == m && veeru == needle) {
                return i - m + 1;
            }
        }
        return -1;
    }
};