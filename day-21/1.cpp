#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void fun(TreeNode<int> *node,int x,vector<int> &v)
{
   if(node==NULL) return;
   fun(node->left,x,v);
   v.push_back(node->val);
   fun(node->right,x,v);

}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
     vector<int> v;
    fun(root,X,v);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto y : v)
    {
        if(y<=X) return y;
    }
    return -1;
}