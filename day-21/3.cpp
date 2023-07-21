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
void fun(TreeNode *node,int x,vector<int> &v)
{
   if(node==NULL) return;
   fun(node->left,x,v);
   v.push_back(node->val);
   fun(node->right,x,v);

}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        fun(root,k,v);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};