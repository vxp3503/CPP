#include<iostream>
#include<math.h>
using namespace std;
int minimumjumps(int a[],int n)
{
        if(a[0]==0)
        {
            return -1;
        }
        int jump=1;
        int step=a[0];
        int maxreach=a[0];
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jump;
            }
            maxreach=max(maxreach,i+a[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxreach)
                {
                    return -1;
                }
                step=maxreach-i;
            }
        }
}

int main()
{
    // int n;
    // cout<<"Enter the no. of elements";
    // cin>>n;
    int arr[]={1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    // cout<<"Enter the elements of an array";
    // for(int i=0;i<11;i++)
    // {
    //     cin>>arr[i];
    // }
    cout<<minimumjumps(arr,11);
}
