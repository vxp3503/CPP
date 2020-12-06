#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> mine)
{
    for (int i = 0; i < mine.size(); i++)
    {
        for (int j = 0; j < mine[i].size(); j++)
        {
            cout << mine[i][j] << " ";
        }
        cout << endl;
    }
}

int gold_mine(vector<vector<int>> mine)
{
    vector<vector<int>> dp;
    dp.resize(mine.size(), vector<int>(mine[0].size(), 0));
    for (int j = mine[0].size() - 1; j >= 0; j--)
    {
        for (int i = 0; i < mine.size(); i++)
        {
            if (j == mine[0].size() - 1)
            {
                dp[i][j] = mine[i][j];
            }
            else if (i == 0)
            {
                dp[i][j] = mine[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
            }
            else if (i == mine.size() - 1)
            {
                dp[i][j] = mine[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);
            }
            else
            {
                dp[i][j] = mine[i][j] + max(max(dp[i][j + 1], dp[i - 1][j + 1]), dp[i + 1][j + 1]);
            }
        }
    }
    print(dp);
    int max = 0;
    for (int i = 0; i < dp.size(); i++)
    {
        if (dp[i][0] > max)
        {
            max = dp[i][0];
        }
    }
    return max;
}

int main()
{
    int n;
    int m;
    int value;
    cout << "Enter no. of rows";
    cin >> n;
    cout << "Enter no. of coloumns";
    cin >> m;
    vector<vector<int>> mine;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            cin >> value;
            row.push_back(value);
        }
        mine.push_back(row);
    }
    print(mine);
    cout << gold_mine(mine);
}