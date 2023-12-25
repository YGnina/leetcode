class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(heights.begin(),heights.end());
        
        int ans = 0;
        for(int i=0; i<heights.size();i++){
            if(expected[i] != heights[i]){
                ans++;
            }
        }
        
        return ans;
    }
};
