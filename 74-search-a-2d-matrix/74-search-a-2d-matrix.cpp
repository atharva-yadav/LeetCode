class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i=0;
        int j=matrix[0].size()-1;
        
        while(i<matrix.size() && i>=0 && j>=0 && j<=matrix[0].size()-1){
            
            if(matrix[i][j] == target){
                return true;
            }
            
            else if(matrix[i][j] < target){
                i++;
            }
            
            else if(matrix[i][j] > target){
                j--;
            }
        }
        return false;
    }
};