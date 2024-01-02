class Solution:
    def minPartitions(self, n: str) -> int:
        ans = 9
        while True:
            if str(ans) in n:
                return ans
            ans -= 1

s = Solution()

print(s.minPartitions("27346209830709182346"))

