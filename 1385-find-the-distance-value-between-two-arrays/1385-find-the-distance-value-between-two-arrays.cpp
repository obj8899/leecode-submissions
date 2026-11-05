class Solution {
public:
    int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
        std::sort(arr2.begin(), arr2.end());
        int count = 0;
        
        for (int val : arr1) {
            auto it = std::lower_bound(arr2.begin(), arr2.end(), val - d);
            if (it == arr2.end() || *it > val + d) {
                count++;
            }
        }
        
        return count;
    }
};
