class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> q;
        
        for(int i=0; i<s.size(); i++){
            q.push(s[i]);
        }
        
        for(int i=0; i<t.size(); i++) {
            
            if(t[i] == q.front())
                q.pop();
        }
        if(q.empty())
            return true;
        else
            return false;
    }
};