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
   int height(TreeNode *root)
   {
       if(root==NULL) return 0;
       int l=height(root->left);
       int r=height(root->right);
       int max1=max(l,r)+1;
       return max1;
   }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;

        int ans=abs(height(root->left)-height(root->right));
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        if(ans<=1 && l && r) return 1;
        return 0;

        
        
    }
};