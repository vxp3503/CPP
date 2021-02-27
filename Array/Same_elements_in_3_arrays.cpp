#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements";
    cin>>n;
    int a[n],b[n],c[n];
    cout<<"enter the elements of first array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of second array";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"Enter the element of second array";
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    set<int>m,s;
    for(int i=0;i<n;i++)
    {
        m.insert(b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])!=m.end())
        {
            s.insert(a[i]);
        }
    }
    // for(auto& e:s)
    // {
    //     cout<<e;
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(s.find(c[i])!=s.end())
        {
            cout<<c[i]<<" ";
        }
    }
}