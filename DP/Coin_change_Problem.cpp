// Formula used C(N,m)=C(N,m-1)+C(N-S[m],m);

#include <bits/stdc++.h>
using namespace std;

int Count(int arr[], int m, int n)
{
    int table[n + 1][m];
    int i, j, x, y;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == 0)
            {
                table[0][j] = 1;
                continue;
            }
            x = (i - arr[j] >= 0) ? table[i - arr[j]][j] : 0;
            y = (j - 1 >= 0) ? table[i][j - 1] : 0;
            table[i][j] = x + y;
        }
    }
    return table[n][m - 1];
}

int main()
{
    int m, n;
    cout << "Enter the No. of coins";
    cin >> m;
    int arr[m];
    cout << "Enter the coins";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter then no. whoes chain you want";
    cin >> n;
    cout << Count(arr, m, n);
}