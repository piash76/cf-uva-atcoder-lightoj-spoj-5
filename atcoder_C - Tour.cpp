
#include <bits/stdc++.h>
using namespace std;

#define maxn 2005
int cl[maxn];
vector<int> g[maxn];
int slt=0;

void DFS(int u){
  ++slt;
  cl[u]=1;
  for(auto &v:g[u]){
    if(cl[v]==0) DFS(v);
  }
}

int main(){

  int n,m;
  scanf("%d %d",&n,&m);

  for(int i=1;i<=m;++i){
    int u,v;
    scanf("%d %d",&u,&v);
    g[u].push_back(v);
  }

  int tong=0;

  for(int i=1;i<=n;++i){
      DFS(i);
      tong+=slt;
      slt=0;
      for(int j=1;j<=n;++j)
        cl[j]=0;
  }

  cerr<<slt<<' '<<tong<<' ';
  printf("%d",tong);

}
