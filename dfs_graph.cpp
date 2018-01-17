class Graph
{
   int V;
   list<int>* adj;
   void DFSUtil(int s);
   public:
   
   void addEdge(int u, int v);
   void DFS (int s);   
}


Graph::addEdge(int u, int v)
{
   adj[u].push_back(v);
}

Graph::DFS( int s)
{
   bool *visited = new bool[V];
   
   for (int i = 0; i < V ; i++)
        visited[i] = false;
   
   DFSUtil( s, visited);   
}

Graph::DFSUtil( int s , bool visited[])
{
   visited[s] = true;
   list<int>::itherator i = adj[s].begin();
   cout<<s<<" ";
   for(;i != adj[s].end(); i++)
   {
      if (!visited[*]){
          visted[*i] = true;
         DFSUtil(*i,visited);
      }
   }
   
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
 
    return 0;
}
