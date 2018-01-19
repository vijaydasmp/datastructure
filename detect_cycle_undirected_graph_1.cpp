
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

