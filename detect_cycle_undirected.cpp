class Graph
{

  private:
    int V;
    list<int> *adj
    void has_cycle_util(int s, bool visited[], bool recstak);  
  public:
   Graph(int v);
   void addEdge(int u, int v);
   bool has_cycle();
};

Graph::Graph(int v)
{
   V = v;
   adj = new list<int>[V];
}

Graph::addEdge(int u, int v)
{
  adj[u].push_back(v);
}

Grap::has_cycle_util(int v, bool visited[], bool recstak[])
{
  
  if(visited[v] == false)
  {
    visited[v] = true;
    recstak[v] = true;
  
    list<int> iterator i;
  
    for(i = adj[s].begin(); i != adj[s].end(); i++)
    {
       if( !visited[*i] && has_cycle_util(*i, visited))
       {
          return true;       
       }
       else if ( recstak[*i] == true)
       {
          return true;
       }
    }
  }
  
  recstak[v] = false;
  return false;
  
}
Grap::has_cycle(int s)
{
  bool *visited = new bool[V];
  bool *recstak = new bool[V];
  
  for (int i = 0; i< V; i++)
  {
        visited[i] = false;
        recstak[i] = false;
  }
  
  list<int>::iterator i;
    
  for ( i = adj[s].begin(); i != adj[s].end())
  {
     if (!visited[*i])
        has_cycle_util(*i, visited, recstak)    
  }
  
}
int main()
{
  Graph g(4);
  g.addedge(0,1)
  // ...
  // ....
  if (g.has_cycle())
  {
    cout<<"Has Cycle";
  }
  else
  {
    cout<<"Dont Have Cycle";
  }   
}
