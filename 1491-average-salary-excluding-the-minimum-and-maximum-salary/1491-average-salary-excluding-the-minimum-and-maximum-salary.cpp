class Solution {
public:
    double average(vector<int>& salary) {
        double count = 0;
        double sum = 0;
        sort(salary.begin(), salary.end());
        
        int size = salary.size();
        
        for(int i=1; i< size-1; i++){
            
            // cout<<salary[i]<<" ";
            count++;
            
            sum = sum + salary[i];
        }
        
        return sum/count;
    }
};