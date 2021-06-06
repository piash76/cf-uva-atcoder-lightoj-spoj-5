#include<bits/stdc++.h>

using namespace std;

vector<int> gp[1000],vis[1000],level[1000],src,trgt;
int n,e;

void clearall()
{
    memset(gp,0,sizeof(gp));
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
}
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=1;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<gp[u].size();i++)
        {
            v=gp[u][i];
            if(!vis[v])
            {
               vis[v]=1;
               level[v]=level[u]+1;
               q.push(v);
            }
        }
    }
}

int main()
{
    int i,j,k,t,x,y;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        clearall();
        scanf("%d %d",&n,&e);
        for(i=1;i<=e;i++)
        {
            scanf("%d %d",&x,&y);
            gp[x].push_back(y);
            gp[y].push_back(x);
        }

        bfs(0);
        for(int l=1;l<n;l++)
        {
            printf("%d\n",level[l]);

        }
        if(k!=t)
        {
            cout<<endl;
        }

    }
}
