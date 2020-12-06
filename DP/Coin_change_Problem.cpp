// Formula used C(N,m)=C(N,m-1)+C(N-S[m],m);

#include <bits/stdc++.h>
using namespace std;

int Count(int arr[], int m, int n)
{
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=0;i< m;i++){
        for(int j=arr[i];j<dp.size();j++){
            dp[j]+=dp[j-arr[i]];
        }
    }
    return dp[n];
}

int main()
{
    int m, n;
    cout << "Enter the No. of coins";
    cin >> m;
    int arr[m];
    cout << "Enter the coins";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter then no. whoes chain you want";
    cin >> n;
    cout << Count(arr, m, n);
}