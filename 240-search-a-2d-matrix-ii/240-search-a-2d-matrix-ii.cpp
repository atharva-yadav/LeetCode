class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i=0; 
        int j = matrix[0].size()-1;
        
        while(i<m && j>=0) {
            
            if(matrix[i][j] == target)
                return true;
            
            else if(matrix[i][j] > target)
                j--;
            
            else if(matrix[i][j] < target)
                i++;
        }
        
        return false;   
    }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();
        
//         int i=0; 
//         int j = matrix[0].size()-1;
        
//         while(i<m && j>=0) {
            
//             if(matrix[i][j] == target)
//                 return true;
            
//             else if(matrix[i][j] > target)
//                 j--;
            
//             else if(matrix[i][j] < target)
//                 i++;
//         }
        
//         return false;
//     }
// };