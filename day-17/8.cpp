  public:
    vector <int> bottomView(Node *root) {
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
           m[line]=x->data;
           
         if(x->left!=NULL) q.push({x->left,line-1});
         if(x->right!=NULL) q.push({x->right,line+1});
       }
       
       for(auto x : m) ans.push_back(x.second);
       return ans;
    }