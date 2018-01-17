class Graph
{
    int V;
    list<int> *adj;
    void topoUtil(int s);
    public:
    Graph(int v);
    void addEdge(int u, int v);
    void topoSort();
}


Graph::Graph(int v)
{
    V = v;
    adj = new list<int>[V];
}

Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}
               
Graph::topoUtil(int s, bool visited[], stack<int> & stk)
{
    visited[s] = true;
    list<int>::iterator i;
    
    for( i = adj[s].begin() ; i != adj[s].end(); i++)
    {
        if(!visited[*i])
            topoUtil(*i, visited, stk);
    }
    
    stk.push(s);
}

Graph::topo()
{
    stack<in> stk;
    
    bool *visited = new bool[V];
    
    for( int i = 0; i<V ; i++)
    {
        topoUtil(i,visited,stk);
    }
    
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop()
    }
}

int main()
{
     Graph g(5);g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph n";
    
     topo();
}
