#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<bool>> mine)
{
    for (int i = 0; i < mine.size(); i++)
    {
        for (int j = 0; j < mine[i].size(); j++)
        {
            cout << mine[i][j] << " ";
        }
        cout << endl;
    }
}
bool target_sum_subset(int arr[],int n,int sum)
{
    vector<vector<bool>> dp;
    dp.resize(n+1,vector<bool>(sum+1));
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[i].size();j++)
        {
            if(i==0&&j==0)
            {
                dp[i][j]=true;
            }
            else if(j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                dp[i][j]=false;
            }
            else
            {
                if(dp[i-1][j]==true)
                {
                    dp[i][j]=true;
                }
                else if(j>=arr[i-1])
                {
                    if(dp[i-1][j-arr[i-1]]==true)
                    {
                        dp[i][j]=true;
                    }
                }
            }    
        }
    }
    print(dp);
    return dp[n][sum];
}
int main()
{
    int n;
    cout<<"Enter No. Of Elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the sum you want";
    cin>>sum;
    cout<<target_sum_subset(arr,n,sum);
}