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
  int max1=0,max2=0;
  int fun(TreeNode *root)
  {
      if(root==NULL) return 0;
     int l=fun(root->left);
     int r=fun(root->right);
     max1=max(max1,l+r);
     return 1+max(l,r);
  }
    int diameterOfBinaryTree(TreeNode* root) {
       fun(root);
       return max1;
        // return max1;
    }
};