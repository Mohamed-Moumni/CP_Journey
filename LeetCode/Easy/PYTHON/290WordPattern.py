class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        splited = s.split(' ')
        if len(pattern) != len(splited):
            return False
        dictio = {}
        for i in range(len(pattern)):
            if pattern[i] in dictio:
                if splited[i] != dictio[pattern[i]]:
                    return False
            else:
                dictio[pattern[i]] = splited[i]
        values = list(dictio.values())
        if len(values) != len(set(values)):
            return False
        return True
