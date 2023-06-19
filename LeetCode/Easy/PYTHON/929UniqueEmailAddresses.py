class Solution:
    def numUniqueEmails(self, emails: list[str]) -> int:
        emailSet = set()
        for i in range(len(emails)):
            splited = emails[i].split('@')
            splited[0] = splited[0].replace('.','')
            if splited[0].find('+') != -1:
                splited[0] = splited[0][:splited[0].find('+')]
            emails[i] = splited[0] + "@" + splited[1]
            emailSet.add(emails[i])
        for elem in emailSet:
            print(elem)
        return len(emailSet)
            

sol = Solution()

emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]

print(sol.numUniqueEmails(emails))
