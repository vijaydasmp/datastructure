// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices 
// reachable from s.
#include<iostream>
#include <list>
 
using namespace std;

class Graph
{
   int V;
   list<int> *adj;
   
   public:
   Graph (int v);
   // add edges u - v // undoretced graph
   void addedge(int u, int v);
   void BFS(int s);
};

Graph::Graph(int v)
{
  V = v;
  adj = new list<int> adj[v];
}

Graph::addedge(int u, int v)
{
  // directed graph
   adj[u].push_back[v];
   // for undirected graph we should be creating a back edege also
   // adj[v].push_back[u];
}

Graph::BFS(int s)
{
  bool *visited = new bool[V];
  for (int i =0; i< V; i++)
        visited[i] = false;
        
  Queue<int> q;
  q.push(s);
  
  visited[s] = true;
  
  list<int>::iterator i;
  
  while(!q.empty())
  {
    s = q.front();
    cout<<q.front();
    q.pop();
  
    for( i = adj[s].begin(); i < adj[s].end(); i++)
    {
       if(!visited[*i]) 
       {
          q.push(*i);
          visited[*i] = true;
       } // if
    } // for
  }//while
} // end method


int main()
{
  Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
    return 0;
}
