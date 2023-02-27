//! Adjacency matrix => represents grapth V nodes into an V * V 0-1 matrix where Aij = 1 means that vertex i and vertex j are connected => 
//adwantages easy implement, access to connections is with complexity O(1) /ver quick/  
//disadvantages are consumes more spares ( O(V^2)) and adding veertex is O(V^2) time
//! Adjancency list => represents grapth with linked lists, size of the arrayy is equal to the number of vertices and each entry of array corresponds to a linked list of certices adjacent to this index
// advantages saves space (works case is O(V^2)) , addind vertex is easier
// disadvantages  queries like whether there is and edge from vertex U to vertex V are not efficient ( O(V) )

#include <iostream>
#include <vector>

// A utility function to add an edge in an
// undirected graph.
void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(int u, std::vector<int> adj[],
					std::vector<bool> &visited)
{
	visited[u] = true;
	std::cout << u << " ";
	for (int i=0; i<adj[u].size(); i++)
		if (visited[adj[u][i]] == false)
			DFSUtil(adj[u][i], adj, visited);
}

// This function does DFSUtil() for all
// unvisited vertices.
void DFS(std::vector<int> adj[], int V)
{
	std::vector<bool> visited(V, false);
	for (int u=0; u<V; u++)
		if (visited[u] == false)
			DFSUtil(u, adj, visited);
}

// Driver code
int main()
{
	int V = 5;

	// The below line may not work on all
	// compilers. If it does not work on
	// your compiler, please replace it with
	// following
	// vector<int> *adj = new vector<int>[V];
	std::vector<int> adj[V];

	// Vertex numbers should be from 0 to 4.
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	DFS(adj, V);
	return 0;
}
