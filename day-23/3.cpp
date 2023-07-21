class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans,vis(V,0);
        queue<int> q;
        q.push(0);
        // ans.push_back(0);
        
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(auto x : adj[p])
            {
                if(!vis[x]) {
                    vis[x]=1;
                    q.push(x);
                }
            }
            ans.push_back(p);
            
        }
        return ans;
        
    }
};