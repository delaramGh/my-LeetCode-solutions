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
    int minDepth(TreeNode* root) 
    {
        if(root == NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        
        int L = INT_MAX, R = INT_MAX;
        
        if (root->left)
            L = minDepth(root->left);
        if (root->right)
            R = minDepth(root->right);
        
        return min(L, R)+1;
    }
    
    
//     vector<int> all_depth(TreeNode* root, vector<int>& v)
//     {
//         if(root == NULL)
//             return 0;
//         if(root->left==NULL && root->right==NULL)
//         {
//             v.push_back()
//         }
//         int L = all_depth(root->left, v);
        
//         de
        
//         int R = all_depth(root->right, v);
        
//         return v;
//     }
    
};