class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int i=0;
        while(i<n.size()-1){
            if(n[i] == n[i+1])
                n.erase(n.begin()+i+1);
            
            else{
                i++;
            }
        }
        return n.size();
    }
};