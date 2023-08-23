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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> toVisit;

        while(1){
            while(root != NULL){
                toVisit.push(root);
                root = root->left;
            };
            if(toVisit.empty()){
                break;
            }
            root = toVisit.top();
            toVisit.pop();

            ans.push_back(root->val);
            root = root->right;
        }

        return ans;
        
    }
};
