class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        i,j,maxcount, ans = 0,0,0,0
        alpha = {}
        for j in range(len(s)):
            alpha[s[j]] = 1 + alpha.get(s[j], 0)
            maxcount = max(alpha.values())
            while (j - i + 1- maxcount > k):
                alpha[s[i]] = alpha.get(s[i]) - 1
                i += 1
            ans = max(ans, j - i + 1)
            j += 1
        return ans


s = Solution()

ans = s.characterReplacement("ABAB", 2)

print(ans)