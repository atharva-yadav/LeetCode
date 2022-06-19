class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum = sum + nums[i];
        }
        
        int suml = 0;
        
        for(int i=0; i<n; i++){
            int sumr = sum - nums[i] - suml;
            if(suml == sumr){
                return i;
            }
            suml = suml + nums[i];
        }
        return -1;
    }
};