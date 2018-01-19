
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
}
                    
