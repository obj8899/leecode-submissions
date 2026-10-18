#include <vector>

using namespace std;

class Solution {
private:
    int modulus = 1e9 + 7;
    vector<vector<long long>> pascal_table;

    void precompute_combinations(int n) {
        pascal_table.assign(n + 1, vector<long long>(n + 1, 0));
        for (int i = 0; i <= n; ++i) {
            pascal_table[i][0] = 1;
            for (int j = 1; j <= i; ++j) {
                pascal_table[i][j] = (pascal_table[i - 1][j - 1] + pascal_table[i - 1][j]) % modulus;
            }
        }
    }

    long long count_arrangements(const vector<int>& elements) {
        if (elements.size() <= 2) {
            return 1;
        }

        int root = elements[0];
        vector<int> left_subtree;
        vector<int> right_subtree;

        for (int i = 1; i < elements.size(); ++i) {
            if (elements[i] < root) {
                left_subtree.push_back(elements[i]);
            } else {
                right_subtree.push_back(elements[i]);
            }
        }

        long long left_ways = count_arrangements(left_subtree);
        long long right_ways = count_arrangements(right_subtree);

        long long total_combinations = pascal_table[left_subtree.size() + right_subtree.size()][left_subtree.size()];

        return (((left_ways * right_ways) % modulus) * total_combinations) % modulus;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        precompute_combinations(n);
        long long total_ways = count_arrangements(nums);
        return (total_ways - 1 + modulus) % modulus;
    }
};
