#include<bits/stdc++.h>
using namespace std;
// void print(vector<vector<int>> mine)
// {
//     for (int i = 0; i < mine.size(); i++)
//     {
//         for (int j = 0; j < mine[i].size(); j++)
//         {
//             cout << mine[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
int solution(vector<vector<int>>maze,int x,int y,int n,int m)
{
    if(x>=0 && y>=0 && x<n && y<n)
    {
        if(maze[x][y]==9)
        {
            return 1;
        }
        if(maze[x][y]==1)
        {
            if(solution(maze,x+1,y,n,m))
            {
                return 1;
            }
            if(solution(maze,x,y+1,n,m))
            {
                return 1;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
int avilabilityofpath(vector<vector<int>>maze,int n,int m)
{
    return solution(maze,0,0,n,m);
}
int main()
{
    vector<vector<int>> maze;
    int n;
    int m;
    int path;
    cout<<"Enter the verticle path";
    cin>>n;
    cout<<"Enter the horizontal path";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        vector<int> horizontal;
        for(int j=0;j<m;j++)
        {
            cin>>path;
            horizontal.push_back(path);
        }
        maze.push_back(horizontal);
    }
    // print(maze);
    cout<<avilabilityofpath(maze,n,m);
}