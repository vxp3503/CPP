#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
public:
    list<int> *adj;
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addedge(int V, int W)
    {
        adj[V].push_back(W);
    }
    bool iscycle(int v, bool visited[], bool recStack[])
    {
        if (visited[v] == false)
        {
            visited[v] = true;
            recStack[v] = true;
            for (auto i = adj[v].begin(); i != adj[v].end(); i++)
            {
                if (!visited[*i] && iscycle(*i, visited, recStack))
                {
                    return true;
                }
                else if (recStack[*i])
                {
                    return true;
                }
            }
        }
        recStack[v] = false;
        return false;
    }
    bool is_cycle()
    {
        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
        for (int i = 0; i < V; i++)
        {
            if (iscycle(i, visited, recStack))
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph g(4); 
    g.addedge(0, 1); 
    g.addedge(0, 2); 
    g.addedge(1, 2); 
    g.addedge(2, 3);  

	if(g.is_cycle()) 
		cout << "Graph contains cycle"; 
	else
		cout << "Graph doesn't contain cycle"; 
	return 0; 
}


