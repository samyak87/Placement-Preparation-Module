/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
bool fun(Node *root)
{
    if(root==NULL) return 1;
    if(root->left==NULL && root->right==NULL) return 1;
    if (root->left == NULL && root->right != NULL) {
      if (root->data != (root->right->data))
        return 0;
    }
    if (root->right == NULL && root->left != NULL){
      if (root->data != (root->left->data))
        return 0;
}
    idroot->data==(root->left->data+ root->right->data);

   return fun(root->left) && fun(root->right);

}
bool isParentSum(Node *root){
    // Write your code here.
    if(root==NULL) return 1;
   return fun(root);
}