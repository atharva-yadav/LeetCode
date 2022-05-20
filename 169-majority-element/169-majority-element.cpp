class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        
        for(int i=0; i<n;i++)
            mp[nums[i]]++;

        int b;
        
        for(auto x: mp){
            // cout<<x.first<<"-"<<x.second<<endl;
            if((x.second) > (n/2))
                b = x.first;
        }
        
        return b;
    }
};