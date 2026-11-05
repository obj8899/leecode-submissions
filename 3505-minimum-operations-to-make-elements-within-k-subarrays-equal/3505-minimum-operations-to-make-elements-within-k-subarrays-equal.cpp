class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();
        int max_start = n - x + 1;
        if (max_start <= 0 || k * x > n) return -1;

        vector<long long> cost(max_start, 0);
        multiset<int> left, right;
        long long sum_left = 0, sum_right = 0;
        int target_left_size = (x + 1) / 2;

        auto balance = [&]() {
            while (left.size() < target_left_size && !right.empty()) {
                int val = *right.begin();
                right.erase(right.begin());
                sum_right -= val;
                left.insert(val);
                sum_left += val;
            }
            while (left.size() > target_left_size) {
                int val = *left.rbegin();
                left.erase(prev(left.end()));
                sum_left -= val;
                right.insert(val);
                sum_right += val;
            }
        };

        auto add = [&](int val) {
            if (left.empty() || val <= *left.rbegin()) {
                left.insert(val);
                sum_left += val;
            } else {
                right.insert(val);
                sum_right += val;
            }
            balance();
        };

        auto remove = [&](int val) {
            auto it = left.find(val);
            if (it != left.end()) {
                sum_left -= val;
                left.erase(it);
            } else {
                it = right.find(val);
                if (it != right.end()) {
                    sum_right -= val;
                    right.erase(it);
                }
            }
            balance();
        };

        for (int i = 0; i < x; ++i) {
            add(nums[i]);
        }
        long long median = *left.rbegin();
        cost[0] = (median * left.size() - sum_left) + (sum_right - median * right.size());

        for (int i = 1; i < max_start; ++i) {
            remove(nums[i - 1]);
            add(nums[i + x - 1]);
            median = *left.rbegin();
            cost[i] = (median * left.size() - sum_left) + (sum_right - median * right.size());
        }

        long long INF = 1e16;
        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, INF));
        
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 0;
        }

        for (int j = 1; j <= k; ++j) {
            for (int i = 1; i <= n; ++i) {
                dp[i][j] = dp[i - 1][j]; 
                if (i >= x && dp[i - x][j - 1] != INF) {
                    dp[i][j] = min(dp[i][j], dp[i - x][j - 1] + cost[i - x]);
                }
            }
        }

        return dp[n][k] >= INF ? -1 : dp[n][k];
    }
};
