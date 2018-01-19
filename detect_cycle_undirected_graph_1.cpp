
/*
   Logic
we can use DFS to detect cycle in an undirected graph in O(V+E) time.
We do a DFS traversal of the given graph. 
For every visited vertex ‘v’, if there is an adjacent ‘u’ such that u is already visited and u is not parent of v,
then there is a cycle in graph. 
If we don’t find such an adjacent for any vertex, we say that there is no cycle.
The assumption of this approach is that there are no parallel edges between any two vertices

*/
/* Let us create following graph
         0
        |  \
        |    \
        1-----2 */ 
#include<iostream>

using namespace std;

class Graph
{
   int V;
   list<int> *adj;
   bool isCyclicUtil(int u, bool visited[], int parent);
   public:
   Graph(int v);
   void addEdge(int u, int v);
   bool isCyclic(int u);
};


Graph::Graph(int v)
{
   V = v;
   adj = new list<int>[V];
}

Graph::addEdge(int u, int v)
{
   adj[u].push_back(v);
   adj[v].push_back(u);  
}

bool Graph::isCyclicUtil(int s, bool visited[], int parent)
{
   visited[u] = true;
   
   list<int>::iterator it;
   for(it = adj[s].begin(); it != adj[s].end(); it++)
   {
      if(!visited[*it] 
      {  
            if(isCyclicUtil(*it, visited, s))
               return true;
      }
      else
      {
          if(*it != parent)
          {
             return true;
          }        
      }
   } 
   return false;
}

bool Graph::isCyclic(int s)
{
   bool *visited = new bool[V];
   for(int i = 0; i < V; i++)
   {
      visited[i] = false;
   }
   list<int>::iterator it;
   
   for(it = adj[s].begin(); it != adj[s].end(); it++)
   {
      if(!visited[*it])
         if(isCyclicUtil(*it,visited, *it))
            return true;
   }
   
   return false;
}
