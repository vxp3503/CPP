#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> V;
    for(int i=0;i<32;i++)
    {
        V.push_back(i);
        cout<<V.size()<<" "<<V.capacity()<< endl;
    }
}