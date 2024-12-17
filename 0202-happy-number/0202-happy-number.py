class Solution:
    def isHappy(self, n: int) -> bool:
        s = str(n)
        temp = s
        while 1:
            ans = 0
            for i in range(len(temp)):
                ans += int(temp[i])**2
                
            if ans == 1:
                return True
            elif ans == 4 or ans == 9:
                return False
            else:
                temp = str(ans)
        return False