class Solution
{
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.
    static int[] dijkstra(int V, ArrayList<ArrayList<ArrayList<Integer>>> adj, int S)
    {
        // Write your code here
        int [] dist = new int[V];
        Arrays.fill(dist,Integer.MAX_VALUE);
        
        dist[S] = 0;
        boolean [] pro = new boolean[V];
        
        for(int i=0; i<V-1; i++)
        {
            int vertex = minCostVertex(dist,pro, V);
            pro[vertex] = true;
            
            for(ArrayList<Integer> ne: adj.get(vertex))
            {
                int node = ne.get(0);
                int weight = ne.get(1);
                
                if(!pro[node]  && dist[node]> dist[vertex]+weight){
                    dist[node] = dist[vertex]+weight;
                }
            }
        }
        return dist;
    }
    private static int minCostVertex(int []cost, boolean [] pro, int V){
        int min = Integer.MAX_VALUE;
        int minIndex = -1;
        
        for(int v=0;v<V;v++)
        {
            if(!pro[v] && cost[v] < min )
            {
                min = cost[v];
                minIndex = v;
            }
        }  
        return minIndex;
    } 
}
