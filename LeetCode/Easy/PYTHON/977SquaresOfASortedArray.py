import typing

class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        i = 0
        for i in range(len(nums)):
            if nums[i] >= 0:
                break
        j = i - 1
        ans = []
        while i < len(nums) and j >= 0:
            if abs(nums[i]) > abs(nums[j]):
                ans.append(nums[j]*nums[j])
                j-=1
            else:
                ans.append(nums[i]*nums[i])
                i+=1
        while i < len(nums):
            ans.append(nums[i]*nums[i])
            i+=1
        while j >= 0:
            ans.append(nums[j]*nums[j])
            j-=1
        return ans

a = Solution()

print(a.sortedSquares([-4,-3,0,1,10]))