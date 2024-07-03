class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfstrav;
        vector<bool>visited(V,false);
        queue<int> q;
        int src = 0;
        q.push(src);
        visited[src] = true;
        
        while(!q.empty())
        {
            int node = q.front();
            bfstrav.push_back(node);
            
            for(int i=0;i<adj[node].size();i++)
            {
                if(!visited[adj[node][i]])
                {
                    visited[adj[node][i]]=true;
                    q.push(adj[node][i]);
                }
            }
            q.pop();
        }
        return bfstrav;
        
    }
};
