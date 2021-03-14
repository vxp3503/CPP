#include<iostream>
#include<math.h>
using namespace std;
int minimumjumps(int a[],int n)
{
    int maxreach=a[0];
    int step=a[0];
    int jump=1;
    for(int i=1;i<n;i++)
    {
        if(i==(n-1))
        return jump;

        maxreach=max(maxreach,a[i]+i);
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
    return -1;
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
