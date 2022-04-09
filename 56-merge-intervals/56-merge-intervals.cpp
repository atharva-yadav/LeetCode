class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>dummy = intervals[0];
        for(auto it:intervals){
            if(dummy[1]>=it[0]){
                dummy[1]=max(dummy[1],it[1]);
            }
            else{
                ans.push_back(dummy);
                dummy = it;
            }
        }
        ans.push_back(dummy);
        return ans;
        
    }
};