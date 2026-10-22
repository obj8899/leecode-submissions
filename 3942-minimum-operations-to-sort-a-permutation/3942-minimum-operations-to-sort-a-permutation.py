class Solution:
    def minOperations(self, nums: list[int]) -> int:
        n, idx = len(nums), nums.index(0)
        if all(nums[(idx + i) % n] == i for i in range(n)):
            return min(idx, n - idx + 2)
        if all(nums[(idx - i) % n] == i for i in range(n)):
            return min(idx + 2, n - idx)
   
        return -1