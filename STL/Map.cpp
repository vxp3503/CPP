#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> Map; //we can also map one container with other container
    Map["Viki"]=18; //unique key is provided;
    Map["Nanu"]=67;
    Map.insert(make_pair("vikrant",18)); //IT stored key value pair in sorted order;
    for(const auto &n:Map)
    {
        cout<<n.first<<" "<<n.second<<endl;
    }
}