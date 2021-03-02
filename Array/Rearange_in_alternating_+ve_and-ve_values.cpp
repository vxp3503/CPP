#include <bits/stdc++.h>
using namespace std;
void rightrotate(int a[], int n, int outofplace, int cur)
{
    char temp = a[cur];
    for (int i = cur; i > outofplace; i--)
    {
        a[i] = a[i - 1];
    }
    a[outofplace] = temp;
}
void rearange(int a[], int n)
{
    int outofplace = -1;
    for (int i = 0; i < n; i++)
    {
        if (outofplace == -1)
        {
            if ((a[i] < 0 && i % 2 != 0) || (a[i] > 0 && i % 2 == 0))
            {
                outofplace = i;
            }
        }
        if (outofplace >= 0)
        {
            if (((a[i] >= 0) && (a[outofplace] < 0)) || ((a[i] < 0) && (a[outofplace] >= 0)))
            {
                rightrotate(a, n, outofplace, i);
                if (i - outofplace >= 2)
                {
                    outofplace = outofplace + 2;
                }
                else
                {
                    outofplace = -1;
                }
            }
        }
    }
}
int main()
{
    int n = 10;
    int a[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    // cout << "Enter size of an array";
    // cin >> n;
    // int a[n];
    // cout << "Enter the elements of an array";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    rearange(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}