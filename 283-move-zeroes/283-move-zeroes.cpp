class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                cnt++;
                ans.push_back(nums[i]);
            }
        }
        int x = nums.size()-cnt;
        for(int i=0; i<x; i++)
            ans.push_back(0);
        
        nums = ans;
      
    }
};