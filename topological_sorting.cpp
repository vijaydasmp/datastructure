class Graph
{
    int V;
    list<int> *adj;
    void topoUtil(int s);
    public:
    Graph(int v);
    void addEdge(int u, int v);                   
}
