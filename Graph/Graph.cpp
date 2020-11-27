#include<bits/stdc++.h>
using namespace std;


class Graph{
    public:
    int v;
    list <int> *adj;
    Graph(int V){
        v=V;
        adj =new list <int>[V];
    }
    void addedge(int V,int W){
        adj[V].push_back(W);
        adj[W].push_back(V);
    }
    void print(){
        list <int>::iterator i;
        for(int y=0;y<v;y++){
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
    Graph g(5);
    g.addedge(0, 1); 
    g.addedge(0, 4); 
    g.addedge(1, 2); 
    g.addedge(1, 3); 
    g.addedge(1, 4); 
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.print();
}