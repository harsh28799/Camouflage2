
#include <iostream> 
#include <list> 
using namespace std; 
  
class Graph 
{ 
    int V;    
    list<int> *adj;    
public: 
    Graph(int V)   { this->V = V; adj = new list<int>[V]; } 
    ~Graph()       { delete [] adj; } 
  
    void addEdge(int v, int w); 
  
    void greedyColoring(); 
}; 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v);  
} 
  
void Graph::greedyColoring() 
{ 
    int result[V]; 
  
    result[0]  = 0; 
  
    for (int u = 1; u < V; u++) 
        result[u] = -1;  

    bool available[V]; 
    for (int cr = 0; cr < V; cr++) 
        available[cr] = false; 
  
    for (int u = 1; u < V; u++) 
    { 
        list<int>::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
            if (result[*i] != -1) 
                available[result[*i]] = true; 
  
        int cr; 
        for (cr = 0; cr < V; cr++) 
            if (available[cr] == false) 
                break; 
  
        result[u] = cr; 
  
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
            if (result[*i] != -1) 
                available[result[*i]] = false; 
    } 
  
    for (int u = 0; u < V; u++) 
        cout << "Vertex " << u << " --->  Color "
             << result[u] << endl; 
} 
  
int main() 
{ 
    Graph g1(19); 
    g1.addEdge(0, 1); 
    g1.addEdge(1, 3); 
    g1.addEdge(1, 4); 
    g1.addEdge(3, 5); 
    g1.addEdge(5, 6); 
    g1.addEdge(6, 7); 
    g1.addEdge(4, 8); 
    g1.addEdge(8, 9); 
    g1.addEdge(9, 10); 
    g1.addEdge(9, 11); 
    g1.addEdge(0, 2); 
    g1.addEdge(2, 12); 
    g1.addEdge(12, 13); 
    g1.addEdge(13, 14); 
    g1.addEdge(13, 15); 
    g1.addEdge(15, 16); 
    g1.addEdge(16, 17); 
    g1.addEdge(17, 18);
    g1.addEdge(17, 19); 
    cout << "Coloring of tree is\n"; 
    g1.greedyColoring(); 
  
  
    return 0; 
} 

