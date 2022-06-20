class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpp;
        set<char> se;
        
        if(s.size() != t.size())
            return false;
        
        for(int i=0; i<s.size(); i++) {
            
            char a = s[i]; 
            char b = t[i];
            
            if(mpp.find(a) != mpp.end()) {
                
                if(mpp[a] != b)
                    return false;
            }
            else {
                
                if(se.find(b) != se.end())
                     return false;
                
                mpp[a] = b;
                se.insert(b);
            }
        }
        return true;
    }
};