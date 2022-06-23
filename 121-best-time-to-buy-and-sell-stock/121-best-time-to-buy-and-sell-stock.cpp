class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyprize = INT_MAX;
        
        for(int i=0; i<prices.size(); i++) {
            buyprize = min(buyprize, prices[i]);
            profit = max(profit, prices[i]-buyprize);
        }
        return profit;
    }
};