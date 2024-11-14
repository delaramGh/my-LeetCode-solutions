class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        std::sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size()-1; i+=2)
        {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        vector<int>::iterator it = nums.end()-1;
        return *it;
    }
};