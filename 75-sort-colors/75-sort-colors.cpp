class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0, c1, c2;
        c0=c1=c2=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                c0++;
            else if(nums[i]==1)
                c1++;
            else
                c2++;
        }
        
        vector<int> ans;
        for(int i=0; i<c0; i++)
            ans.push_back(0);
        
        for(int i=0; i<c1; i++)
                    ans.push_back(1);
        
        for(int i=0; i<c2; i++)
            ans.push_back(2);
        
        nums = ans;
    }
};