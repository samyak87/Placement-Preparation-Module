

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

 void fun(Node *root,vector<int>&ans,int x)
 {
     if(root==NULL) return;
     if(x==ans.size())
      ans.push_back(root->data);


   fun(root->left,ans,x+1);
   fun(root->right,ans,x+1);
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
       vector<int> ans;
   fun(root,ans,0);
   return ans;
   
   
}