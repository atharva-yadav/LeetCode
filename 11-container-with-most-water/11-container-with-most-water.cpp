class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int res= INT_MIN;
        int start=0, end=n-1;
        
        while(start<end){
            int area= min(height[start], height[end]) * (end-start);
            res = max(res, area);
            
            if(height[start] > height[end])
                end--;
            else
                start++;
        }
        
        return res;
    }
};