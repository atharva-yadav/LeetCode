class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int diff;
        int prevdiff = arr[1] - arr[0];
        
        for(int i=0; i<arr.size()-1; i++){
            diff = arr[i+1] - arr[i];
            
            if(prevdiff != diff)
                return false;
            
            prevdiff = diff;
        }
        return true;
    }
};