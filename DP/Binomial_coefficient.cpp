#include<bits/stdc++.h>
using namespace std;



Binomial_Coff1(int n,int k){
	int c[k+1];
	memset(c,0,sizeof(c));
	c[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(k,i);j>0;j--){
			c[j]=c[j]+c[j-1];
		}
	}
	return c[k];
}


Binomial_Coff2(int n,int k){
	int c[n+1][k+1];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=min(i,k);j++){
			if(j==0||j==i){
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	return c[n][k];
}
int main(){
	int n,k;
	cout<<"Enter the value of n and k to find Binomial Coff C(n,k)";
	cin>>n;
	cin>>k;
	cout<<"Coefficient using more space while calculating"<<" "<<Binomial_Coff1(n,k)<<endl<<"Coefficient using less space while calculating"<<" "<<Binomial_Coff2(n,k); 
}