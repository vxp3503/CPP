#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]>1)
        {
            cout<<i+1;
            return i+1;
        }
    }
    return -1;
}