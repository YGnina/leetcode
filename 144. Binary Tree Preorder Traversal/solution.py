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
        result=[]
        stack = [root]
        if root is None:
            return
        
        while stack:
            node =  stack.pop()
            if node:
                result.append(node.val)
                stack.append(node.right)
                stack.append(node.left)
                
        return result
