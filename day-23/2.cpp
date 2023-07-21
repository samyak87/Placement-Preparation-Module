class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int> &vis,vector<int> adj[],int node,vector<int> &ans)
    {
        vis[node]=1;
        ans.push_back(node);
        
        for(auto x : adj[node])
        {
            if(!vis[x])
            dfs(vis,adj,x,ans);
        }
        
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V,0);
        int node=0;
        dfs(vis,adj,node,ans);
        return ans;
    }
};