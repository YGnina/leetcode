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
    bool isValidBST(TreeNode* root) {
        return compare(root, nullptr,nullptr);
    }

    bool compare(TreeNode* root, int* leftC, int* rightC){
        if(root==NULL){
            return true;
        }

        if(rightC != nullptr && root->val >= *rightC){
            return false;
        }
        if(leftC != nullptr && root->val <= *leftC){
            return false;
        }

        return compare(root->left, leftC, &(root->val)) && compare(root->right, &(root->val),rightC) ;

    }
};
