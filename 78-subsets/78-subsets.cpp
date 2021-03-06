class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&ds,vector<int>nums,int ind){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ans,ds,nums,ind+1);
        ds.pop_back();
        solve(ans,ds,nums,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(ans,ds,nums,0);
        return ans;
    }
};