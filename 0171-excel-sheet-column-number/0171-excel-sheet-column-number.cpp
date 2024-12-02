class Solution {
public:
    int titleToNumber(string s) 
    {
        int ans = 0;
        for(int i=0; i<s.size(); i++)
        {   
            int temp = int(s[i]) - 64;
            ans += temp * pow(26, s.size()-1-i);
        }
        return ans;
    }
};