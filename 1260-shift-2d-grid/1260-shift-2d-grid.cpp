class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        if(k==0)
            return grid;
        
        while(k--){
            
            int l = grid[grid.size()-1][grid[0].size()-1];
            
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    swap(l,grid[i][j]);
                }
            }
        }
        return grid;
        
    }
};