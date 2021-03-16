#include<bits/stdc++.h>
using namespace std;
bool issumzero(int a[],int n)
{
    unordered_set <int>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0||s.find(sum)!=s.end())
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter no. of elements";
    cin>>n;
    int a[n];
    cout<<"Enter Elements";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<issumzero(a,n);
}