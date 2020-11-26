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
    }
    void print(){
        list <int>::iterator i;
        i=adj[0].begin() ;
        cout<<"0";
        while(i!=adj[0].end()){
            cout<<"->"<<*i;
            i++;
        }

    }
};


int main(){
    Graph g(4);
    g.addedge(0,10);
    g.print();
}
