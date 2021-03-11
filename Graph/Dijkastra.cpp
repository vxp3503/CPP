#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f

class Graph{
    int V;
    public:
    list <pair<int,int>> *adj;
    Graph(int V){
        this->V=V;
        adj =new list <pair<int,int>>[V];
    }
    void addedge(int V,int W,int weight){
        adj[V].push_back(make_pair(W,weight));
        adj[W].push_back(make_pair(V,weight));
    }
    void shortest_path(int src)
    {
        set<pair<int,int>> s;
        vector<int> dist(V, INF);
        s.insert(make_pair(0,src));
        dist[src]=0;
        while(!s.empty())
        {
            pair<int,int> temp=*s.begin();
            s.erase(s.begin());
            int u=temp.second;
            for(auto i=adj[u].begin();i!=adj[u].end();i++)
            {
                int v =(*i).first;
                int weight = (*i).second;
                if(dist[v]>dist[u]+weight)
                {
                    if(dist[v]!=INF)
                    {
                        s.erase(s.find(make_pair(dist[v],v)));
                        dist[v]=dist[u]+weight;
                        s.insert(make_pair(dist[v],v));
                    }
                }
            } 
        }
        for(int i=0;i<V;i++)
        {
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
};


int main(){
    Graph g(9);  
    g.addedge(0, 1, 4); 
    g.addedge(0, 7, 8); 
    g.addedge(1, 2, 8); 
    g.addedge(1, 7, 11); 
    g.addedge(2, 3, 7); 
    g.addedge(2, 8, 2); 
    g.addedge(2, 5, 4); 
    g.addedge(3, 4, 9); 
    g.addedge(3, 5, 14); 
    g.addedge(4, 5, 10); 
    g.addedge(5, 6, 2); 
    g.addedge(6, 7, 1); 
    g.addedge(6, 8, 6); 
    g.addedge(7, 8, 7);
    g.shortest_path(0);
}