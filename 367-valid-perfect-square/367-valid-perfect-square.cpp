class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        int end = num;
        long long mid = start+(end-start)/2;
        while(start<=end){
            long long j = mid*mid;
            if(j==num){
                return true;
            }
            else if(j < num){
                start = mid+1;
            }
            else end = mid-1;
            mid = start+(end-start)/2;
        }
        return false;
    }
};