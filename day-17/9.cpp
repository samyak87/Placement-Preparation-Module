class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
           // Your Code Here
        vector<int> ans;
        if(root==NULL) return ans;
        queue<pair<Node*,int>> q;
    map<int,int> m;                         // done for sorted ordering
        
        q.push({root,0});
       while(!q.empty())
       {
           auto it=q.front();
           q.pop();
           Node *x=it.first;
           int line=it.second;
           if(m.find(line)==m.end())               // this line included in this code apart from bottom
           // view so that no line value can be overridden
           
           m[line]=x->data;
           
         if(x->left!=NULL) q.push({x->left,line-1});
         if(x->right!=NULL) q.push({x->right,line+1});
       }
       
       for(auto x : m) ans.push_back(x.second);
       return ans;
    }

};
