class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int buyIdx = 0;
    int sellIdx = 1;
    int maxP = 0;
    while (sellIdx < prices.size())
    {
       if(prices[buyIdx] < prices[sellIdx]) {
            int profit = prices[sellIdx] - prices[buyIdx];
            maxP = max(maxP, profit);
       } else {
        buyIdx = sellIdx;
       }
       ++sellIdx;
    }
    return maxP;
    }
};
