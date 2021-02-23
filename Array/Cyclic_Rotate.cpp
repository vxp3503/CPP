#include<bits/stdc++.h>
using namespace std;
void cyclic_rotate(vector<int>arr)
{
    vector<int> result;
    for(int i=0;i<arr.size();i++)
    {
        result.push_back(arr[(i+arr.size()-1)%arr.size()]);
        cout<<result[i]<<" ";
    }
}
int main()
{
    vector<int>arr;
    cout<<"Enter the number of elements";
    int n,element;
    cin>>n;
    cout<<"Enter the elememts of array";
    for(int i=0;i<n;i++)
    {
        cin>>element;
        arr.push_back(element);
    }
    cyclic_rotate(arr);
}