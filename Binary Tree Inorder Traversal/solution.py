# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        ans = []
	    # Recursive function
        def inorder(root):
			# Base case
            if root is None:
                return
            
			
			# Travel left then right
            inorder(root.left)
            # Record node
            ans.append(root.val)
            inorder(root.right)
            
            
        inorder(root)
        return ans

        
