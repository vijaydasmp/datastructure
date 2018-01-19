typedef struct Edge
{
   int src;
   int dest;
}Edge;

typedef struct Graph
{
  int V, E;
  Edge *edges;
}Graph;

Graph * CreateGraph(int V, int E)
{
  Graph *g = (Graph *) malloc(V * sizeof(Graph));
  g->V = V;
  g->E = E;
  
  g->edges = (Edge*) malloc (E * sizeof(Edge));
  
  return g;
}

void adddEdge(int u , int v, int wt)
{
}
