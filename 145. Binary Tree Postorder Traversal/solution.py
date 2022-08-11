# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        
        ans = []
	    # Recursive function
        def postorder(root):
			# Base case
            if root is None:
                return
            
			
			# Travel left then right
            postorder(root.left)
            postorder(root.right)
            # Record node
            ans.append(root.val)
            
        postorder(root)
        return ans
