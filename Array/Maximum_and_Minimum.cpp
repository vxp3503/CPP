#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int S = a[0];
    int L = a[0];
    for (int i = 1; i < n; i++)
    {
        if (L < a[i])
        {
            L = a[i];
        }
        if (S > a[i])
        {
            S = a[i];
        }
    }
    cout << S << " " << L << endl;
}