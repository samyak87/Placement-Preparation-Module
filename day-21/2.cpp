#include <bits/stdc++.h> 

void fun(BinaryTreeNode<int> *node,int x,vector<int> &v)
{
   if(node==NULL) return;
   fun(node->left,x,v);
   v.push_back(node->data);
   fun(node->right,x,v);

}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    vector<int> v;
    fun(node,x,v);
    sort(v.begin(),v.end());
    for(auto y : v)
    {
        if(y>=x) return y;
    }
    return -1;
}