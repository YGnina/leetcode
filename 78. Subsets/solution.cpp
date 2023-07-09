class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};

        for(int n: nums){
            int len = ans.size();
            for(int i=0; i<len; i++){
                ans.push_back(ans[i]);
                ans.back().push_back(n);
            }
        }
        return ans;
        
    }
};
