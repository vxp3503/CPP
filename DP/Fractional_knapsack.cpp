#include<bits/stdc++.h>
using namespace std;

int Fractional_knapsack(int v[],int w[],int n,int cap)
{
    vector<int>dp(cap+1,0);
    for(int i=0;i<n;i++)
    {
        for(int j=w[i];j<dp.size();j++)
        {
            if((dp[j-w[i]]+v[i])>dp[j])
            {
                dp[j]=dp[j-w[i]]+v[i];
            }
        }      
    }
    return dp[cap];
}
int main()
{
    int n;
    cout<<"Enter the no. of items";
    cin>>n;
    int values[n];
    int weight[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value";
        cin>>values[i];
        cout<<"Enter the weights";
        cin>>weight[i];
    }
    cout<<"Enter the capacity of bag";
    int cap;
    cin>>cap;
    cout<<Fractional_knapsack(values,weight,n,cap);
}