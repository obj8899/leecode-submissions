class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9 || sum < 1) {
            return "";
        }
        
        string ans = "";
        int nines = sum / 9;
        int remainder = sum % 9;
        
        if (nines > 0) {
            ans.append(nines, '9');
        }
        if (remainder > 0) {
            ans.push_back('0' + remainder);
        }
        
        int zeros = num - ans.length();
        if (zeros > 0) {
            ans.append(zeros, '0');
        }
        
        return ans;
    }
};
