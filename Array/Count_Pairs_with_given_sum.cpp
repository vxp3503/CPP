#include<bits/stdc++.h>
using namespace std;
int SumCount(vector<int>arr,int Sum)
{
    map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        count+=m[Sum-arr[i]];
        if(Sum-arr[i]==arr[i])
        {
            count--;
        }
    }
    return count/2;
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the no of elements of an array";
    cin>>n;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        arr.push_back(item);
    }
    int Sum;
    cout<<"Enter the sum";
    cin>>Sum;
    cout<<SumCount(arr,Sum);
}