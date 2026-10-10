class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long totalK = 1LL * k1 + k2;
        
        // Track the count of each absolute difference
        // max possible diff is 10^5 according to constraints
        vector<int> freq(100005, 0);
        int maxVal = 0;
        
        for (int i = 0; i < n; i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            maxVal = max(maxVal, d);
        }
        
        // Greedily flatten from the largest differences down to 1
        for (int d = maxVal; d > 0; d--) {
            if (freq[d] == 0) continue;
            
            if (totalK >= freq[d]) {
                totalK -= freq[d];
                freq[d - 1] += freq[d];
                freq[d] = 0;
            } else {
                freq[d - 1] += totalK;
                freq[d] -= totalK;
                totalK = 0;
                break;
            }
        }
        
        long long ans = 0;
        for (int d = 1; d <= maxVal; d++) {
            if (freq[d] > 0) {
                ans += 1LL * freq[d] * d * d;
            }
        }
        
        return ans;
    }
};