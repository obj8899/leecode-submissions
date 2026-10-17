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
        vector<pair<int, int>> items(n);
        
        for (int i = 0; i < n; ++i) {
            items[i] = {nums[i], i};
        }

        sort(items.begin(), items.end(), [this](const pair<int, int>& a, const pair<int, int>& b) {
            int sumA = getDigitSum(a.first);
            int sumB = getDigitSum(b.first);
            if (sumA != sumB) {
                return sumA < sumB;
            }
            return a.first < b.first;
        });

        vector<bool> visited(n, false);
        int total_swaps = 0;

        for (int i = 0; i < n; ++i) {
            if (visited[i] || items[i].second == i) {
                continue;
            }

            int cycle_size = 0;
            int curr = i;

            while (!visited[curr]) {
                visited[curr] = true;
                curr = items[curr].second;
                cycle_size++;
            }

            if (cycle_size > 1) {
                total_swaps += (cycle_size - 1);
            }
        }

        return total_swaps;
    }
};
