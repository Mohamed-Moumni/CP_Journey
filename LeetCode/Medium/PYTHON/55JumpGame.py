class Solution:
    def canJump(self, nums: List[int]) -> bool:
        goal = len(nums) - 1
        for i in range(len(nums) - 2, -1, -1):
            if (i + nums[i] >= goal):
                goal = i
        if (goal == 0):
            return True
        return False


ans = Solution()

if ans.canJump([2,3,1,1,4]):
    print("He can Jump")
else:
    print("He can't Jump")