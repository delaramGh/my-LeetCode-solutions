# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        # head = TreeNode()
        return self.helper(0, len(nums)-1, nums)
        
        
    
    def helper(self, left, right, nums) -> Optional[TreeNode]:
        if left > right:
            return
        mid = (left+right)//2
        temp = TreeNode(nums[mid])
        temp.left = self.helper(left, mid-1, nums)
        temp.right = self.helper(mid+1, right, nums)
        return temp
        
        