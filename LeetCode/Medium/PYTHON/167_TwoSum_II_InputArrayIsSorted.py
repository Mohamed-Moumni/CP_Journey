from typing import List
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l, r, sum_ = 0, len(numbers) - 1, 0
        ret = []
        while (l < r):
            sum_ = numbers[l] + numbers[r]
            if sum_ == target:
                ret.append(l+1)
                ret.append(r+1)
                return ret
            if sum_ < target:
                l += 1
            if sum_ > target:
                r -= 1
        return (ret)


a = Solution()

print(a.twoSum([1,2,7,9], 9))