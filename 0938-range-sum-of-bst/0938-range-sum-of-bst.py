# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    acc = 0
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        temp = root
        # acc = 0
        self.traverse(temp, low, high)
        return self.acc
        
    def traverse(self, node, low, high):
        if node == None:
            return 0
        print(node.val)
        if node.val >= low and node.val <= high:
            self.acc += node.val
        self.traverse(node.left, low, high)
        self.traverse(node.right, low, high)
    
                
        