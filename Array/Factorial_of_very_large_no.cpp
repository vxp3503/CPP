#include<bits/stdc++.h>
using namespace std;
string large_factorial(int n)
{
    if(n==0)
    {
        return "1";
    }
    int counter;
    long double sum=0;
    for(counter=1;counter<=n;counter++)
    {
        sum=sum+log(counter);
    }
    string result=to_string(round(exp(sum)));
    return result;
}
int main()
{
    int n;
    clock_t tStart = clock();
    cout<<"Enter the no. whoes factorial you want";
    cin>>n;
    cout<<large_factorial(n)<<endl;
        cout << "Time taken: " << setprecision(10) 
         << ((double)(clock() - tStart) 
             / CLOCKS_PER_SEC) 
         << " s" << endl; 
}

// It gets failed while getting an answer

// #include <iostream>
// using namespace std;
// long double result[1000] = {0};
// long double fact(int n) {
//    if (n >= 0) {
//       result[0] = 1;
//       for (int i = 1; i <= n; ++i) {
//          result[i] = i * result[i - 1];
//       }
//       return result[n];
//    }
// }
// int main() {
//    int n;
//    while (1) {
//       cout<<"Enter integer to compute factorial (enter 0 to exit): ";
//       cin>>n;
//       if (n == 0)
//       break;
//       cout<<fact(n)<<endl;
//    }
//    return 0;
// }