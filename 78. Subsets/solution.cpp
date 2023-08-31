class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

    // Using [1, 2, 3] as an example, the iterative process is like:
    // Initially, one empty subset [[]]
    // Adding 1 to []: [[], [1]];
    // Adding 2 to [] and [1]: [[], [1], [2], [1, 2]];
    // Adding 3 to [], [1], [2] and [1, 2]: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]].

        vector<vector<int>> ans = {{}};

        for(int n:nums){
            int len = ans.size();
            for(int i=0; i<len; i++){
                ans.push_back(ans[i]);
                ans.back().push_back(n);
            }
        }
        return ans;
        
    }
};
