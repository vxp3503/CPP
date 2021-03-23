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
    int profit=0;
    for(int i=1;i<n;i++)
    {
        int sub=a[i]-a[i-1];
        if(sub>0)
        {
            profit+=sub;
        }
    }
    cout<<profit;
}