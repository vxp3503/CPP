#include<bits/stdc++.h>
using namespace std;
int main()
{
    std:: vector<vector<int>> Tree;
    int edge,n1,n2;
    cin>>edge;
    Tree.resize(edge);
    for(int i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        Tree[n1].push_back(n2);
    }
    int i=0;
    for(const auto& e1:Tree)
    {
        cout<<i<<"-->";
        i++;
        for(const auto & e2:e1)
        {
            cout<<e2<<" ";
        }
        cout<<endl;
    }
}