class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int i = 1;
        set<int>se;
        for(int i=0;i<arr.size();i++)se.insert(arr[i]);
        int count = 0;
        while(count!=k){
            if(se.find(i)==se.end()){
                count++;
            }
            i++;
        }
        return i-1;
    }
};