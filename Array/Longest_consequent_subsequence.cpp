#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N=84;
    int arr[84];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
        multiset<int>s;
        int temp[N];
        int v=0;
        int count =0;
        int j=0;
        for(int i=0;i<N;i++)
        {
            s.insert(arr[i]);
        }
        for(auto &n:s)
        {
            temp[j]=n;
            cout<<temp[j]<<" ";
            j++;
        }
        cout<<endl;
        for(int i=1;i<N;i++)
        {
            if(temp[i]==temp[i-1]+1||temp[i]==temp[i-1])
            {
                if(temp[i]==temp[i-1])
                {
                    continue;
                }
                count=count+1;
            }
            else
            {
                cout<<count<<" ";
                if(count>v)
                {
                v=count;
                }
                count=0;
            }
        }
        if(count>v)
        {
            v=count;
        }
        cout<<endl<< v+1;
}
