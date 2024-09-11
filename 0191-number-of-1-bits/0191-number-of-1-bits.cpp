class Solution {
public:
    int hammingWeight(int n) 
    {
        int sum{};
        vector<int> v{};
        v = to_binary(n);
        for(size_t i{}; i<32; i++)
            sum += v[i];
        // cout<<pow(3, 2);
        return sum;
    }
    
    
    vector<int> to_binary(int a)
    {
        vector<int> v{};
        for(size_t i{}; i<32; i++)
        {
            int temp = (a % 2);
            v.push_back(temp);
            a = (a-temp)/2;
        }
        return v;
    }
};