#include <vector>

using namespace std;

class Solution {
private:
    int modulus = 1e9 + 7;
    vector<vector<int>> pascal_table;

    int count_arrangements(const vector<int>& elements) {
        if (elements.size() <= 2) return 1;

        vector<int> left_subtree, right_subtree;
        int root = elements[0];

        for (int i = 1; i < elements.size(); ++i) {
            if (elements[i] < root) left_subtree.push_back(elements[i]);
            else right_subtree.push_back(elements[i]);
        }

        long long left_ways = count_arrangements(left_subtree);
        long long right_ways = count_arrangements(right_subtree);
        long long total_combinations = pascal_table[elements.size() - 1][left_subtree.size()];

        return (left_ways * right_ways % modulus) * total_combinations % modulus;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        pascal_table.assign(n + 1, vector<int>(n + 1, 1));
        
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                pascal_table[i][j] = (pascal_table[i - 1][j - 1] + pascal_table[i - 1][j]) % modulus;
            }
        }

        return (count_arrangements(nums) - 1 + modulus) % modulus;
    }
};
