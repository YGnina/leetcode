class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Search from the top-right element 
        // educe the search space by one row or column at each time.

        int len = matrix.size();
        int wid = matrix[0].size();
        int row = 0, col = wid-1;

        while(row < len && col >= 0){
            if(matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] > target){
                // target is less than this element
                // impossible to appear in the same colomn, skip
                col--;
            }else{
                // target is greater than this element
                // impossible to appear in the same row, skip
                row++;
            }
            
        }
        return false;
    }
};
