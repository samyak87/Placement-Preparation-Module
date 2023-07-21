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
  unordered_map<int,int> m;
  void fun(TreeNode  *node)
{
   if(node==NULL) return;
   fun(node->left);
  m[node->val]++;
   fun(node->right);

}

bool flag=0;
void fun2(TreeNode *node,int k)
{
   if(node==NULL) return;
   fun2(node->left,k);
   // if(2*node->val==k && m[node->val]>=2) flag=1;
   if(m[node->val]>0 && m[k-(node->val)]>0) {
      if(node->val==k-node->val)
      {
         if(m[node->val]>=2) flag=1;
      }
      else
     flag=1;
   //   return;
  }
   fun2(node->right,k);
}

    bool findTarget(TreeNode* root, int k) {
       if(root==NULL) return 0;
       if(root!=NULL && root->left==NULL && root->right==NULL) return 0;

        fun(root);
        fun2(root,k);
       return flag;
    }
};