class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t ans = 0;
        for(int i=31; i>=0; i--)
        {
            uint32_t power = pow(2, i);
            int bit = int(n / power);
            n = n - bit*power;
            
            ans += bit * pow(2, 31-i);
        }
        return ans;
    }
    
    
    void show(vector<int> v)
    {
        for(auto i : v)
            cout << i << ", ";
        cout << endl;
    }
};