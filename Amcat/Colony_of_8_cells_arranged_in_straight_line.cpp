#include <bits/stdc++.h>
using namespace std;
int cellCompete(int a[], int days)
{
    for (int i = 0; i < days; i++)
    {
        int u[8];
        a[-1] = 0;
        a[8] = 0;
        for (int i = -1; i < 9; i++)
        {
            u[i] = a[i];
        }
        for (int j = 0; j < 8; j++)
        {
            if (u[j - 1] == u[j + 1])
            {
                a[j] = 0;
            }
            else
            {
                a[j] = 1;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
int main()
{
    int a[8];
    cout << "Enter elements of an array";
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    int days;
    cout << "Enter Days";
    cin >> days;
    cellCompete(a, days);
}