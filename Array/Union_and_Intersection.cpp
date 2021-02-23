#include<bits/stdc++.h>
using namespace std;
void union_and_intersection(vector<int>array,vector<int>array2)
{
    set<int>mul;
    set<int>set2;
    for(int i=0;i<array.size();i++)
    {
        mul.insert(array[i]);
        set2.insert(array[i]);
    }
    for(int i=0;i<array2.size();i++)
    {
        mul.insert(array2[i]);    
    }
    cout<<"Union of elements"<<endl;
    for(const auto&e:mul)
    {
        cout<<e<<" ";
    }  
    cout<<endl<<"Intersection of elements"<<endl;
    for(int i=0;i<array2.size();i++)
    {
        if(set2.find(array2[i])!=set2.end())
        {
            cout<<array2[i]<<" ";
        }    
    }
}
int main()
{
    cout<<"Program to find intersection of tweo unsorted array"<<endl;
    cout<<"Enter the elements of first array"<<endl;
    vector<int>array;
    vector<int>array2;
    cout<<"Enter the size of first array"<<endl;
    int n;
    int elements;
    int element2;
    cin>>n;
    cout<<"Enter the values of first array";
    for(int i=0;i<n;i++)
    {
        cin>>elements;
        array.push_back(elements);
    }
    int n1;
    cout<<"Enter the size of second array";
    cin>>n1;
    cout<<"Enter the elements of second array";
    for(int i=0;i<n;i++)
    {
        cin>>element2;
        array2.push_back(element2);
    }
    union_and_intersection(array,array2);
}