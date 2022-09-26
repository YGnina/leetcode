/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution 
{
    public TreeNode invertTree(TreeNode root)
    {
        
        //base case       
        if(root == null){
            return null;
        }
        
        //Recursing down the left subtree
        TreeNode left= invertTree(root.left);
        //Recursing down the right subtree
        TreeNode right= invertTree(root.right);
        
        //ROOT
        //swap the pointers, to just alternate the node 
        root.left= right;//root left is pointing to right child
        root.right= left;//root right is pointing to left child
        
        return root;
    }
}
