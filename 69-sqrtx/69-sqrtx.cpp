class Solution {
public:
    int mySqrt(int x) {
        
        long long s = 1;
        
        while(s*s <= x)
            s++;
        
        return s-1;
    }
};