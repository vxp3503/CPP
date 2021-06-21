#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    if(idx==n)
    {
        return 0;
    }
    int s=max(arr,idx+1,n);
    if(s>arr[idx])
    {
        return s;
    }
    else
    return arr[idx];
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
