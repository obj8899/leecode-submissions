class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int totalSum = 0;
        int n = nums.size();

        for (int k = 1; k <= n; ++k) {
            if (n % k != 0) {
                continue;
            }

            bool isValidK = true;
            int lastBlockMax = -1e9;

            for (int blockStart = 0; blockStart < n; blockStart += k) {
                int dropCount = 0;
                int minVal = nums[blockStart];
                int maxVal = nums[blockStart];

                for (int i = 0; i < k; ++i) {
                    int currentIdx = blockStart + i;
                    int nextIdx = blockStart + (i + 1) % k;

                    minVal =min(minVal, nums[currentIdx]);
                    maxVal =max(maxVal, nums[currentIdx]);

                    if (nums[currentIdx] > nums[nextIdx]) {
                        dropCount++;
                    }
                }

                if (dropCount > 1 || minVal < lastBlockMax) {
                    isValidK = false;
                    break;
                }

                lastBlockMax = maxVal;
            }

            if (isValidK) {
                totalSum += k;
            }
        }

        return totalSum;
    }
};
