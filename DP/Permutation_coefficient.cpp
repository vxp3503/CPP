#include<iostream>
using namespace std;

// Less Complexity Method;
int P(int n,int k){
    int v=1;
    for(int i=0;i<k;i++){
        v*=(n-i);
    }
    return v;
}
int Perm(int n,int k){
    int p[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            if(j==0){
                p[i][j]=1;
            }
            else
            {
                p[i][j]=j*p[i-1][j-1]+p[i-1][j];
            }
            p[i][j+1]=0;
            
        }
    }
    return p[n][k];
}
int main()
{
    int n,k;
    cout<<"Enter the value of n and k in P(n,k)";
    cin>>n;
    cin>>k;
    cout<<P(n,k)<<endl;
    cout<<Perm(n,k);
}