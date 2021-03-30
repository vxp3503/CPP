#include<bits/stdc++.h>
using namespace std;
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=0;
	    int count=0;
	    int count1=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        if(count>count1)
	        {
	            max=i;
	            count1=count;
	        }
	        count=0;
	    }
	    if(max==0&&count1==0)
	    {
	        return -1;
	    }
	    return max;
	}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<rowWithMax1s(arr,n,m);
}