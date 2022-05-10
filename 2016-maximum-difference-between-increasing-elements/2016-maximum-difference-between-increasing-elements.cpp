class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int maxdiff = 0;
        int mini = INT_MAX;
        
        for(int i=0; i<nums.size(); i++){
            mini = min(mini, nums[i]);
            maxdiff = max(maxdiff, nums[i]-mini);
        }
        if(maxdiff == 0) return -1;
        return maxdiff;
    }
};