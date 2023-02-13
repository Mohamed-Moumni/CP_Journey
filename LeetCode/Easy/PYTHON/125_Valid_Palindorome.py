class Solution:
    def isPalindrome(self, s: str) -> bool:
        i = 0
        j = len(s) - 1
        while i < j:
            while i < j and not self.isalphaNum(s[i]):
                i += 1
            while j > i and not self.isalphaNum(s[j]):
                j -= 1
            if (s[i].lower() != s[j].lower()):
                    return (False)
            i += 1
            j -= 1
        return (True)
    def isalphaNum(self, c:str) -> bool:
        return ((ord(c) >= ord('A') and ord(c) <= ord('Z')) or (ord(c) >= ord('a') and ord(c) <= ord('z')) or (ord(c) >= ord('0') and ord(c) <= ord('9')))


a = Solution()

if a.isPalindrome("Marge, let's \"[went].\" I await {news} telegram."):
     print("is palindrome")
else:
     print("is not palindrome")

