#include<bits/stdc++.h>
using namespace std;
int Knapsack_0_1(int values[],int weight[],int n,int cap)
{
    vector<vector<int>> dp;
    dp.resize(n+1,vector<int>(cap+1,0));
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            if(j>=weight[i-1])
            {
                int rem=j-weight[i-1];
                if(dp[i-1][rem]+values[i-1]>dp[i-1][j])
                {
                    dp[i][j]=dp[i-1][rem]+values[i-1];         
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
                
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][cap];
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
    cout<<Knapsack_0_1(values,weight,n,cap);
}