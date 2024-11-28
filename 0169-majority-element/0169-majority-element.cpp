class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        set<int> mySet(nums.begin(), nums.end());
        int cnt = 0;
        for(int value : mySet)
        {
            cnt = count(nums.begin(), nums.end(), value);
            if(cnt > (nums.size()/2) )
                return value;
        }        
        return 1;
    }
    
    void show(vector<int> v)
    {
        for(int i=0; i<v.size(); i++)
            cout << v[i] << ", ";
        cout << endl;
    }
    
    
    void show(set<int> v)
    {
        for(int i : v)
            cout << i << ", ";
        cout << endl;
    }
    
};