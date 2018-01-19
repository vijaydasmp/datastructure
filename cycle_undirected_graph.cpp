
// Detect Cycle in an Undirected Graph

typdef struct Edge
{
    int src, dest;
}Edge;
 
typdef struct Graph
{
  // V-> Number of vertices, E-> Number of edges
  int V;
  int E;
  
  // graph is represented as an array of edges
    struct Edge* edge;
}Graph;

Graph * CreateGraph(int V, int E)
{
  Graph *g = (Graph *) malloc (sizeof(Graph));
  g->V = V;
  g->E = E;
  
  g->edge = (Edge *) malloc (E * sizeof(Edge));
  
  return g;
}

int find(int *parent, int i)
{
    if (parent[i] == -1)
        return i;
    
    return find(parent, parent[i]);    
}

Union(int *parent, int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
 
    parent[xset] = yset;
}
 
bool isCyclic(Graph *g)
{
    // Allocate memory for creating V subsets
    int *parent = (int*) malloc( g->V * sizeof(int) );
    
    // Initialize all subsets as single element sets
    memset(parent, -1, sizeof(int) * g->V);
    
    for ( int i=0; i<E ; i++)
    {
        int x = find(parent, g->edge[i].src);
        int y = find(parent, g->edge[i].dest);
        if ( x==y)
               return true;
        Union(parent, g->edge[i].src, g->edge[i].dest);
    }   
    
    return false;
}

// Driver program to test above functions
int main()
{
    /* Let us create following graph
         0
        |  \
        |    \
        1-----2 */    
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V, E);
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
 
    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;
 
    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;
 
    if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );
 
    return 0;
}
                    
