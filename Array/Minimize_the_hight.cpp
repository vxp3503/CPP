#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[],int n,int k)
{
        sort(arr,arr+n);
        int  maxi;int mini;
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<=n-1;i++)          //-ve hight is considered
        {
            maxi=max(arr[i-1]+k,arr[n-1]-k);
             mini=min(arr[0]+k,arr[i]-k);
            ans=min(ans,maxi-mini);
        }
        return ans;
}
int main()
{
	int arr[] = {6, 1, 9, 1, 1, 7, 9, 5, 2, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 4;
	cout << "\nMaximum difference is "
		<< getMinDiff(arr, n, k);
	return 0;
}