#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    long long MOD = 1e9 + 7;
    // tree1 stores sum of d[i], tree2 stores sum of d[i]^2
    vector<long long> tree1, tree2, lazy;

    void push(int node, int start, int end) {
        if (lazy[node] == 0) return;
        
        int mid = start + (end - start) / 2;
        int left = 2 * node, right = 2 * node + 1;
        long long val = lazy[node];

        // Update left child
        long long len_l = mid - start + 1;
        tree2[left] = (tree2[left] + 2 * val * tree1[left] + val * val % MOD * len_l) % MOD;
        tree1[left] = (tree1[left] + val * len_l) % MOD;
        lazy[left] = (lazy[left] + val) % MOD;

        // Update right child
        long long len_r = end - mid;
        tree2[right] = (tree2[right] + 2 * val * tree1[right] + val * val % MOD * len_r) % MOD;
        tree1[right] = (tree1[right] + val * len_r) % MOD;
        lazy[right] = (lazy[right] + val) % MOD;

        lazy[node] = 0;
    }

    void update(int node, int start, int end, int l, int r, long long val) {
        if (r < start || end < l) return;
        if (l <= start && end <= r) {
            long long len = end - start + 1;
            tree2[node] = (tree2[node] + 2 * val * tree1[node] + val * val % MOD * len) % MOD;
            tree1[node] = (tree1[node] + val * len) % MOD;
            lazy[node] = (lazy[node] + val) % MOD;
            return;
        }
        push(node, start, end);
        int mid = start + (end - start) / 2;
        update(2 * node, start, mid, l, r, val);
        update(2 * node + 1, mid + 1, end, l, r, val);
        
        tree1[node] = (tree1[2 * node] + tree1[2 * node + 1]) % MOD;
        tree2[node] = (tree2[2 * node] + tree2[2 * node + 1]) % MOD;
    }

public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        tree1.assign(4 * n, 0);
        tree2.assign(4 * n, 0);
        lazy.assign(4 * n, 0);

        unordered_map<int, int> last_pos;
        long long total_sum = 0;

        for (int j = 0; j < n; ++j) {
            int prev_idx = last_pos.count(nums[j]) ? last_pos[nums[j]] : -1;
            
            // Increment the distinct count d[i] for all subarrays starting from prev_idx + 1 to j
            update(1, 0, n - 1, prev_idx + 1, j, 1);
            
            // tree2[1] holds the total sum of squares of distinct counts for all subarrays ending at j
            total_sum = (total_sum + tree2[1]) % MOD;
            
            last_pos[nums[j]] = j;
        }

        return (total_sum + MOD) % MOD;
    }
};
