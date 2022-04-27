class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tillSum = 0;
        int maxa = INT_MIN;
        
        for(int i=0; i<nums.size(); i++)
        {
            tillSum = tillSum + nums[i];
  
            maxa = max(maxa, tillSum);
            
            if(tillSum < 0)
                tillSum = 0;
            
        }
        return maxa;
    }
};
