class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        
        for(int i=0; i < s.length(); i++){
            
            if(s[i] == '#' && !st.empty())
                st.pop();
            else if(s[i] == '#' && st.empty()) continue;
            else  st.push(s[i]);
        }
        
        for(int i=0; i<t.length(); i++){
           if(t[i] == '#' && !tt.empty())
                tt.pop();
            else if(t[i] == '#' && tt.empty()) continue;
            else  tt.push(t[i]);
        }
        return (st==tt);
       
    }
};