class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        else{
            unordered_map<char,int>mpp;
            for(int i=0;i<s.size();i++){
                mpp[s[i]]++;
                
            }
            for(int i=0;i<t.size();i++){
                if(mpp.find(t[i])!=mpp.end()){
                    if(mpp[t[i]]==0)return false;
                    else mpp[t[i]]--;
                }
                else return false;
            }
            return true;
        }
    }
};