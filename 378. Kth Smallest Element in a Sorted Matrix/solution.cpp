class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int len = matrix.size();

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                pq.push(matrix[i][j]);
                if(pq.size() > k){
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};
