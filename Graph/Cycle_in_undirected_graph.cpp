#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addedge(int V, int W)
    {
        adj[V].push_back(W);
        adj[W].push_back(V);
    }
    bool iscycle(int v, bool visited[], int parent)
    {
        visited[v] = true;
        for (auto i = adj[v].begin(); i != adj[v].end(); i++)
        {
            if (!visited[*i])
            {
                if (iscycle(*i, visited, v))
                return true;
            }
            else if (*i != parent)
            {
                return true;
            }
        }
        return false;
    }
    bool is_cycle()
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
                if (iscycle(i, visited, -1))
                    return true;
        }
        return false;
    }
};

int main()
{
    Graph g1(5);
    g1.addedge(1, 0);
    g1.addedge(0, 2);
    g1.addedge(2, 1);
    g1.addedge(0, 3);
    g1.addedge(3, 4);
    g1.is_cycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    Graph g2(3);
    g2.addedge(0, 1);
    g2.addedge(1, 2);
    g2.is_cycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    return 0;
}
