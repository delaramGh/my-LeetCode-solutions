class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() == 1)
            return 0;
        
        int left = 0, right = 1;
        int max = 0;
        for(int i{}; i<prices.size()-1; i++)
        {
            if(prices[right] < prices[left])
            {
                left = right;
            }
              
            int profit = prices[right] - prices[left];
            if(profit > max)
                max = profit;
            right++; 
        }
        return max;

    }

    
};