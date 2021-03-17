#include <bits/stdc++.h>
using namespace std;
int lrgestsuminsubarray(int a[], int n)
{
    int curr = a[0];
    int maxi = a[0];
    for (int i = 1; i < n; i++)
    {
        curr = max(a[i], curr + a[i]);
        maxi = max(curr, maxi);
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter no. of elements";
    cin >> n;
    int a[n];
    cout << "Enter Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << lrgestsuminsubarray(a, n);
}