class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int prod = 1;
        int sum = 0;
        
        while(n){
            int rem = n%10;
            
            prod = prod*rem;
            sum = sum+rem;
            
            n = n/10;
        }
        return prod - sum;
    }
};