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
    void DFS(int s)
    {
        bool *visited= new bool[V];
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }
        stack<int>st;
        st.push(s);
        while (!st.empty())
        {
            s=st.top();
            st.pop();
        
            if(!visited[s])
            {
                cout<<s<<" ";
                visited[s]=true;
            }
            for(auto i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(!visited[*i])
                {
                    st.push(*i);
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
    Graph g(5); // Total 5 vertices in graph
    g.addedge(1, 0);
    g.addedge(0, 2);
    g.addedge(2, 1);
    g.addedge(0, 3);
    g.addedge(1, 4);
    g.DFS(0);
}