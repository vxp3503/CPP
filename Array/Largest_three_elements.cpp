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
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            third=second;
            second=first;
            first=a[i];
            continue;
        }
        if(a[i] >second)
        {
            third=second;
            second=a[i];
            continue;
        }
        if(a[i]>third)
        {
            third=a[i];
            continue;
        }
    }
    cout<<first<<" "<<second<<" "<<third;
}