class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string s = to_string(x);
        int left = 0;
        int right = s.size()-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
        
    }
};