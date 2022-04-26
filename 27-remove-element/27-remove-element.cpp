class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//         int i=0;
//         int j=nums.size()-1;
//         if(nums.size() == 0){
//             return 0;
//         }
//         while(i<j){
//             if(nums[i] == val)
//             {
//                 swap(nums[i], nums[j]);
//                 j--;
//             }
            
//             else
//             {
//                 i++;
//             }
//         }
//         return i+1;
        
        int count=0;
        if(nums.size() == 0)
            return 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val)
                nums[count++] = nums[j];
            
        }
        return count;
    }
};