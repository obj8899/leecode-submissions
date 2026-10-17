class Solution {
private:
    int getDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;

        sort(sorted_nums.begin(), sorted_nums.end(), [this](int a, int b) {
            int sumA = getDigitSum(a);
            int sumB = getDigitSum(b);
            if (sumA != sumB) {
                return sumA < sumB;
            }
            return a < b;
        });

        unordered_map<int, int> target_idx;
        for (int i = 0; i < n; ++i) {
            target_idx[sorted_nums[i]] = i;
        }

        vector<bool> visited(n, false);
        int total_swaps = 0;

        for (int i = 0; i < n; ++i) {
            if (visited[i] || target_idx[nums[i]] == i) {
                continue;
            }

            int cycle_size = 0;
            int curr = i;

            while (!visited[curr]) {
                visited[curr] = true;
                curr = target_idx[nums[curr]];
                cycle_size++;
            }

            if (cycle_size > 1) {
                total_swaps += (cycle_size - 1);
            }
        }

        return total_swaps;
    }
};
