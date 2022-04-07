class Solution {
public:
    int fpos(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int f = -1;
        while(s<=e){
            
            int mid = s + (e-s)/2;
            
            if(nums[mid] == target){
                f = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else
                s = mid+1;
            
        }
        return f;    
    }
    
    int lpos(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int l=-1;
        while(s<=e){
            
            int mid = s + (e-s)/2;
            
            if(nums[mid] == target){
                l = mid;
                s = mid+1;
            }
            
            else if(nums[mid]<target){
                s = mid+1;
            }
            else
                e = mid-1;
            
        }
        return l;    
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        
        int fp = fpos(nums,target);
        int lp = lpos(nums,target);
        ans.push_back(fp);
        ans.push_back(lp);
        
        return ans;
    }
};