class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        // If the number is power of two; then its binary will contain `1` for only 1 times.
        // We will check by number is equal to each combination of position of `1` by left shifting the 1.
        int temp = 1;
        for(int i=1; i<32; i++){
            
            if(temp == n){
                return true;
            }
            temp = temp<<1;
        }
        return false;
        
    }
};