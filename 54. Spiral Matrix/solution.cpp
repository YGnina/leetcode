class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();
        int cnt = 0;
        int total = row * col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(cnt < total){
            for(int i=startingCol; cnt<total && i<=endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                cnt++;
            }
            startingRow++;

            for(int i=startingRow; cnt<total && i<=endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                cnt++;
            }
            endingCol--;

            for(int i=endingCol; cnt<total && i>=startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                cnt++;
            }
            endingRow--;

            for(int i=endingRow; cnt<total && i>=startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                cnt++;
            }
            startingCol++;

        }

        return ans;
        
    }
};
