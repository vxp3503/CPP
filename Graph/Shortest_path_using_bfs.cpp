#include<bits/stdc++.h>
using namespace std;


class Graph{
    int V;
    public:
    list <int> *adj;
    Graph(int V){
        this->V=V;
        adj =new list <int>[V];
    }
    void addedge(int V,int W){
        adj[V].push_back(W);
        adj[W].push_back(V);
    }
    bool shortest_path(int src,int dest,bool visited[],int dist[],int pred[])
    {
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
            dist[i]=INT_MAX;
            pred[i]=-1;
        }
        queue<int>q;
        dist[src]=0;
        visited[src]=true;
        q.push(src);
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            for(auto i=adj[v].begin();i!=adj[v].end();i++)
            {
                if(!visited[*i])
                {
                    visited[*i]==true;
                    dist[*i]=dist[v]+1;
                    pred[*i]=v;
                    q.push(*i);
                    if(*i==dest)
                    {
                        return true;
                    }
                }
            }
        }
    }
    int print_path(int source,int dest)
    {
        bool *visited=new bool[V];
        int dist[V];
        int pred[V];
        if(!this->shortest_path(source,dest,visited,dist,pred))
        {
            cout<<"Path does not exist";
            return 0;
        }
        else
        {
            vector<int>path;
            int crawl=dest;
            path.push_back(crawl);
            while(pred[crawl]!=-1)
            {
                path.push_back(pred[crawl]);
                crawl=pred[crawl];
            }
            for(int i=dist[dest];i>=0;i--)
            {
                if(i!=dist[dest])
                {
                    cout<<"->";
                }
                cout<<path[i];
            }
            cout<<endl;
            cout<<"Shortest Path Length";
            return dist[dest];
        }
    }
};


int main(){
    Graph g(8);
    g.addedge(0, 1);
    g.addedge(0, 3);
    g.addedge(1, 2);
    g.addedge(3, 4);
    g.addedge(3, 7);
    g.addedge(4, 5);
    g.addedge(4, 6);
    g.addedge(4, 7);
    g.addedge(5, 6);
    g.addedge(6, 7);
    int source = 0, dest = 7;
    cout<<g.print_path(source,dest);
}