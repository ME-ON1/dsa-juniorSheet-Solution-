#include <bits/stdc++.h>
using namespace std;
const int MAX=2e4;
int n,m,mx,dis[MAX];
void BFS(int src)
{
    queue<int> q;
    dis[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        int red=2*par,bl=par-1;
        if(par==m)
        {
            printf("%d\n",dis[par]);
            exit(0);
        }
        if(red<=MAX&&dis[red]==-1)
            dis[red]=dis[par]+1,q.push(red);
        if(bl>0&&dis[bl]==-1)
            dis[bl]=dis[par]+1,q.push(bl);
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    memset(dis,-1,sizeof dis);
    BFS(n);
    return 0;
}

