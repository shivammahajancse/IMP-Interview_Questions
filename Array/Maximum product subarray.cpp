class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
         int res=nums[0];
        
//     product1 maximum till curr index and product2 minimum till curr index.
         int product1=nums[0],product2=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int temp=max({nums[i],product1*nums[i],product2*nums[i]});
            product2=min({product1*nums[i],nums[i],product2*nums[i]});
            product1=temp;
            res=max(res,product1);
        }
      return res;
    }
};
