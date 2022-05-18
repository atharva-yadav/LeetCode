class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
//         for(int i=0; i<prices.size(); i++){
//             if(mini>prices[i]){
//                 mini=prices[i];
//                 idx = i;
//             }
//         }
//         if(idx<prices.size()){
//           for(int j=idx+1; j<prices.size(); j++){
//             if(prices[j]>best){
//                 best = prices[j];
//             }
//         }
//         }

//         cout<<best<<"-"<<mini<<endl;
//         int profit = best-mini;
//         for(int i=0;i<prices.size();i++){
//             mini = min(mini, prices[i]);
//             profit = max(profit, prices[i]-mini);
//         }
        
//         return profit;
        
        for(int i=0; i<prices.size(); i++){
            mini = min(mini, prices[i]);
            
            profit = max(profit, prices[i]-mini);
            
        }
        return profit;
    }
};