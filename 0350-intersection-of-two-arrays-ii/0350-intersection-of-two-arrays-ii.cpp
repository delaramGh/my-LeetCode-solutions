class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s1 = set(nums1.begin(), nums1.end());
        set<int> s2 = set(nums2.begin(), nums2.end());
        
        vector<int> v1, v2;
        
        for(int value : s1)
            v1.push_back(count(nums1.begin(), nums1.end(), value));
        
        for(int value : s2)
            v2.push_back(count(nums2.begin(), nums2.end(), value));
    
        int cnt = 0;
        vector<int> ans;
        for(int value : s1)
        {
            auto it = s2.find(value);
            if(it != s2.end())
            {
                int index = distance(s2.begin(), it);
                int minimum = min(v1[cnt], v2[index]);
                for(int i=0; i<minimum; i++)
                    ans.push_back(value);
            }
            cnt++;
        }
        return ans;
    }
    
    
    void show(vector<int> v)
    {
        for(int value : v)
            cout << value << ", ";
        cout << endl;
    }
    
    void show(set<int> v)
    {
        for(int value : v)
            cout << value << ", ";
        cout << endl;
    }
};