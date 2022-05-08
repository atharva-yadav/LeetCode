class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        int n = nums1.size();
        vector<int> ans(n, -1);
        
        unordered_map<int,int> mp;
        
        for(int i=nums2.size()-1; i>=0; i--){
            
            while(!st.empty() && st.top()<=nums2[i])
                st.pop();
            
            if(!st.empty() && st.top()>nums2[i])
                // ans.push_back(st.top());
                mp[nums2[i]] = st.top();
            
            st.push(nums2[i]);
        }
        
        // for(int i=0; i<ans.size(); i++){
        //     mp[ans[i]]++;
        // }
        
        // vector<int> v;
        
        
        for(int i=0; i<nums1.size(); i++){
            // v.push_back(mp[nums1[i]]);
            if(mp.find(nums1[i])!=mp.end()){
                ans[i] = mp[nums1[i]];
            }
        }
        
        return ans;
    }
};