class Solution {
public:
    int calPoints(vector<string>&nums) {
        int sum = 0;
        vector<int>ans;
        int i = 0;
        while(i<nums.size()){
            if(nums[i]=="+"){
                int l = ans[ans.size()-1]+ans[ans.size()-2];
                ans.push_back(l);
            }
            else if(nums[i]=="D"){
                ans.push_back(ans[ans.size()-1]*2);
            }
            else if(nums[i]=="C"){
                ans.erase(ans.begin()+ans.size()-1,ans.end());
            }
            else{
                ans.push_back(stoi(nums[i]));
            }
            i++;
        }
        i = 0;
        while(i<ans.size()){
            sum+=ans[i];
            i++;
        }
        return sum;
    }
};