# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        # Store nodes
        ans = []
		# Recursive function
        def preorder_traversal(root):
			# Base case
            if root is None:
                return
            
			# Record node
            ans.append(root.val)
			# Travel left then right
            preorder_traversal(root.left)
            preorder_traversal(root.right)
            
        preorder_traversal(root)
        return ans
