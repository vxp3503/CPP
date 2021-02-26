#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of array";
    cin>>n;
    vector<int>a;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        a.push_back(item);
    }
    sort(a.begin(),a.end());
    cout<<"Repeating elements are";
    for(int i=0;i<n;i++)
    {
        if(i>0&&a[i]==a[i-1])
        {
            continue;
        }
        if(a[i]==a[i+1])
        {
            cout<<a[i];
        }
    }
}