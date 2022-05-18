class Solution {
public:
    int maxProfit(vector<int>& p) {
        int profit = 0;
        
        if(p.size()==1){
            return 0;
        }
        
        for(int i=1; i<p.size(); i++){
            if(p[i]>p[i-1]){
                profit = profit + (p[i]-p[i-1]);
            }
        }
        return profit;
    }
};