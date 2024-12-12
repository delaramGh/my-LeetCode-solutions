class Solution:
    def firstUniqChar(self, s: str) -> int:
        s2 = set(s)
        
        unique = []
        for letter in s2:
            n = s.count(letter)
            if n == 1:
                unique.append(letter)
                
        for i in range(len(s)):
            if s[i] in unique:
                return i
        return -1
                
        