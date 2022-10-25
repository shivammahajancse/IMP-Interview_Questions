class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      int maxprofit=0,profit=0,prevmin=prices[0];
        
      for(int i=1;i<prices.size();i++)
      {
          if(prices[i]<prevmin)
              prevmin=prices[i];
          profit=prices[i]-prevmin;
          maxprofit=max(maxprofit,profit);
      }
     return maxprofit;
    }
};
