#include<bits/stdc++.h>
using namespace std;
int lrgestproductinsubarray(int a[],int n)
{
    int max_val=a[0];
    int min_val=a[0];
    int maxproduct=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(max_val,min_val);
        }
        max_val=max(a[i],max_val*a[i]);
        min_val=min(a[i],min_val*a[i]);
        maxproduct=max(max_val,maxproduct);
    }
    return maxproduct;
}
int main()
{
    int n;
    cout << "Enter no. of elements";
    cin >> n;
    int a[n];
    cout << "Enter Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << lrgestproductinsubarray(a, n);
}