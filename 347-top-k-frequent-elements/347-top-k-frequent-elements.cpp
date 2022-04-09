class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> pq;
        
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        
        for(int i=0; i<k; i++)
        {
            auto j = pq.top();
            v.push_back(j.second);
            pq.pop();
        }
        
        return v;
    }
};