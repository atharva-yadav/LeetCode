class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int count = 0;
        string a = s1;
        string b = s2;
        
        if(s1 == s2)
            return true;
        
        else if(s1 != s2){
            
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            
            if(a != b)
                return false;
        
            for(int i=0; i<s1.size(); i++){
                
                if(s1[i] != s2[i])
                    count++;
            }
            
            if(count > 2)
                return false;
        }
        
        return true;
    }
};