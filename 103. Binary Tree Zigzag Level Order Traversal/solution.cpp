/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        q.push(root);

        // use dir to change direction
        int dir = 0;

        while(!q.empty()){
            int len = q.size();
            vector<int> cur(len);

            for(int i=0; i<len; i++){
                TreeNode* tem = q.front();
                q.pop();

                if(dir==0){
                    cur[i] = tem->val;
                }else{
                    cur[len-i-1] = tem->val;
                }
                if(tem->left) q.push(tem->left);
                if(tem->right) q.push(tem->right);
            }
            ans.push_back(cur);
            // set to the opposite direction
            dir = !dir;
        }

        return ans;
    }
};
