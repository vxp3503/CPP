#include<iostream>
using namespace std;
void merge(int a[],int mid,int l,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=a[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            a[k]=arr1[i];
            i++;
        }
        else
        {
            a[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        a[k]=arr2[j];
        k++;
        j++;
    }
}
void merge_sort(int a[],int l,int r)
{
    if(l>=r)
    return;
    int mid =l+ (r-l)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    merge(a,mid,l,r);
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<endl;
    printarray(a,n);
}