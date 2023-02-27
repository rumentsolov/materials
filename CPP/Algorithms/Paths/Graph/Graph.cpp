//! Adjacency matrix => represents grapth V nodes into an V * V 0-1 matrix where Aij = 1 means that vertex i and vertex j are connected => 
//adwantages easy implement, access to connections is with complexity O(1) /ver quick/  
//disadvantages are consumes more spares ( O(V^2)) and adding veertex is O(V^2) time
//! Adjancency list => represents grapth with linked lists, size of the arrayy is equal to the number of vertices and each entry of array corresponds to a linked list of certices adjacent to this index
// advantages saves space (works case is O(V^2)) , addind vertex is easier
// disadvantages  queries like whether there is and edge from vertex U to vertex V are not efficient ( O(V) )

#include <iostream>
#include <vector>

void addEdge(std::vector<int> adj[], int u, int v) /* adding edge in undirected graph */ {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printVertex(std::vector<int> adj[]){
    for(size_t i = 0; i < adj.size();i++) {
        std::count << AdjacencyList[i] << " ";
    }
    std::cout << std::endl;

}

int main()
{
	int V = 5;
    //! containers doesnt accept variables as length argument

	 //std::vector<int> *AdjacencyList = new std::vector<int>[V]; 
    std::vector<int> AdjacencyList[V]; // -> but not aways working

	// Vertex numbers should be from 0 to 4 due to we have 5 vertices
	addEdge(AdjacencyList, 0, 1);
	addEdge(AdjacencyList, 0, 4);
	addEdge(AdjacencyList, 1, 2);
	addEdge(AdjacencyList, 1, 3);
	addEdge(AdjacencyList, 1, 4);
	addEdge(AdjacencyList, 2, 3);
	addEdge(AdjacencyList, 3, 4);

    print(AdjacencyList);
   
  bool** AdjacencyMatrix = new bool* [V];
    for (int i = 0; i < V; i++) AdjacencyMatrix[i] = new bool[V];
    
    for (int i = 0; i < V; i++) 
        for (int k = 0; k < V; k++) 
            AdjacencyMatrix[i][k] = false;


delete[]AdjacencyMatrix;
AdjacencyMatrix = NULL;
	return 0;
}
