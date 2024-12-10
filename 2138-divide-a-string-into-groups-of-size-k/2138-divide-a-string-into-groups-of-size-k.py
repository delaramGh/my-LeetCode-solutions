class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        # print("len: ", len(s), ", k: ", k)
        r = len(s) % k
        if r != 0:
            s = s + fill*(k-r)
        ans = []
        for i in range(0, len(s), k):
            ans.append(s[i:i+k])    
        return ans
        