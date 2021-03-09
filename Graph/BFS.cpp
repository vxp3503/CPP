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
    void BFS(int s)
    {
        bool *visited= new bool[V];
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }
        queue<int>q;
        visited[s]=true;
        q.push(s);
        while (!q.empty())
        {
            s=q.front();
            cout<<s<<" ";
            q.pop();
            for(auto i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(!visited[*i])
                {
                    visited[*i]=true;
                q.push(*i);
            }
            }
        }
        
    }
    void print(){
        list <int>::iterator i;
        for(int y=0;y<V;y++){
            cout<<"head";
            for(i=adj[y].begin();i!=adj[y].end();i++)
            {
                cout<<"->"<<*i;
            }
            cout<<endl;
        }
    }
};


int main(){
    Graph g(4);
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
    g.BFS(2);
}