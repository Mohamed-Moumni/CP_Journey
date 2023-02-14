class Solution:
    res = []
    stack = []

    def generateParenthesis(self, n: int) -> List[str]:
        def recu_func(self,l,r):
            if (l == r == n):
                res.append("".join(stack))
                return
            if (l < n):
                stack.push("(")
                recu_func(l+1,r)
                stack.pop()
            if (r < l):
                stack.push(")")
                recu_func(l, r + 1)
                stack.pop()
        return res