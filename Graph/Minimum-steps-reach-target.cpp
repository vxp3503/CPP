#include<bits/stdc++.h>
using namespace std;
struct Cell
{
    int x;
    int y;
    int dis;
    Cell()
    {}
    Cell(int x,int y,int dis):x(x),y(y),dis(dis)
    {}
};

bool isinside(int x,int y,int n)
{
    if(x>=1&&y>=1&&x<=n&&y<=n)
    {
        return true;
    }
    return false;
}
    int minimumStepToReachTarget(int Knight[],int target[], int n)
    {
        int dx[]={-2,-1,1,2,-2,-1,1,2};
        int dy[]={-1,-2,-2,-1,1,2,2,1};
        queue<Cell>q;
        q.push(Cell(Knight[0],Knight[1],0));
        Cell t;
        int x,y;
        bool visited[n+1][n+1];
        for (int i = 1; i <= n; i++)
        for(int j=1;j<=n;j++)
            visited[i][j]=false;
        visited[Knight[0]][Knight[1]]=true;
        while (!q.empty())
        {
            t=q.front();
            q.pop();
            if(t.x==target[0]&&t.y==target[1])
            {
                return t.dis;
            }
            for(int i=0;i<8;i++)
            {
                x=t.x+dx[i];
                y=t.y+dy[i];
                if(isinside(x,y,n)&&!visited[x][y])
                {
                    visited[x][y]=true;
                    q.push(Cell(x,y,t.dis+1));
                }
            }
        }
        
    }
int main()
{
    int N = 30; 
    int knightPos[] = { 1, 1 }; 
    int targetPos[] = { 30, 30 }; 
    cout << minimumStepToReachTarget(knightPos, targetPos, N); 
    return 0; 
}