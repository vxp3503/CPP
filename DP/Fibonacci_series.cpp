#include<iostream>
using namespace std;
#define NIL (-1)
int table[50];
int table2[50];
//fibonacci using recursion
int fib(int n){
	if(n<2){
		return n;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}


// fibonacci using dp
// since dp have two techniques so

// 1.Memoization:->
int dpmemoization(int n){
	if(table[n]==NIL){
		if(n<=1){
			table[n]=n;
		}
		else{
			table[n]=dpmemoization(n-1)+dpmemoization(n-2);
		}
	}
	return table[n];
}

// 2.Tabulation:->
int dptabulation(int n){
	table2[0]=0;
	table2[1]=1;
	for(int i=2;i<=n;i++){
		table2[i]=table2[i-1]+table2[i-2];
	}
	return table2[n];
}
int main(){
	int n;
	cin>>n;
	cout<<"Solution using recursion"<<endl<<fib(n)<<endl;
for(int i=0; i<=n; i++){
	table[i]=NIL;
}
    cout<<"Solution using memoization"<<endl<<dpmemoization(n)<<endl;
	cout<<"Solution using tabulation"<<endl<<dptabulation(n)<<endl;
}