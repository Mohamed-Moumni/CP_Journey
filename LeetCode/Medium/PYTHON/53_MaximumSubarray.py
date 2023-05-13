import math
import typing

class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        maxSum = -math.inf
        currentSum = 0
        for x in nums:
            currentSum = max(x, x + currentSum)
            maxSum = max(maxSum, currentSum)
        return maxSum


s = Solution()

print(s.maxSubArray([-1, 3, -2, 5, 3, -5, 2, 2]))