class Solution {
public:
    int minOperations(string text) {
        int length = text.size();

        if (is_sorted(text.begin(), text.end())) {
            return 0;
        }

        if (length == 2) {
            return -1;
        }

        char smallestChar = text[0];
        char largestChar = text[0];

        for (int i = 1; i < length; ++i) {
            if (text[i] < smallestChar) {
                smallestChar = text[i];
            }
            if (text[i] > largestChar) {
                largestChar = text[i];
            }
        }

        if (text[0] == smallestChar || text[length - 1] == largestChar) {
            return 1;
        }

        for (int i = 1; i < length - 1; ++i) {
            if (text[i] == smallestChar || text[i] == largestChar) {
                return 2;
            }
        }

        return 3;
            }
};
