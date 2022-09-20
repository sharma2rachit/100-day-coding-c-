class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsonow=prices[0], maxpr=0;
        int n=prices.size();
        
        for (int i=0;i<n;i++){
            minsonow=min(prices[i],minsonow);
            maxpr=max(maxpr,(prices[i]-minsonow));
            
        }
        return maxpr;
           
    }
};