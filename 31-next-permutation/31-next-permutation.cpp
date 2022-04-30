class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         //next_permutation(nums.begin(), nums.end());
        int i=0; int j=0;
    
        for(i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                break;
            }
            
        }
        if(i<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(j=nums.size()-1; j>=0; j--){
                if(nums[j]>nums[i])
                {
                    swap(nums[i], nums[j]);
                    break;
                }
            }
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};