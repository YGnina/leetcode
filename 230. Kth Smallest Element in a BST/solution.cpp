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
    int ans;

    void sort(TreeNode* root, int& k){
        if(root == NULL){
            return;
        }

        sort(root->left, k);
        if(--k == 0){
            ans = root->val;
            return;
        }
        sort(root->right, k);

    }
    int kthSmallest(TreeNode* root, int k) {
        sort(root,k);
        return ans;
        
    }
};
