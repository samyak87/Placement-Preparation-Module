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
    int widthOfBinaryTree(TreeNode* root) {
    
        queue<TreeNode*> q;
        q.push(root);
int max1=0;
        while(!q.empty())
{
            vector<int> v;

    int n=q.size();
    max1=max(max1,n);
    for(int i=0;i<n;i++)
    {
        TreeNode *p=q.front();
        q.pop();
        if(p->left==NULL) p->left=
       q.push(p->left);
       q.push(p->right);
       v.push_back(p->val);
    }
}       
        return max1;
    }
};