class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int l = 0;
        int r = col - 1;
        
        while(l<row && r>=0){
            if(matrix[l][r] == target) return true;
            
            else if(matrix[l][r] > target) r--;
            
            else if(matrix[l][r] < target) l++;
        }
        
        return false;
    }
};