class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0)
                return 0;
            else if(nums[i]<0)
                n++;
        }
        
        int ans;
        if(n%2 == 0) 
            ans = 1;
        else
            ans = -1;
        
        return ans;
    }
};