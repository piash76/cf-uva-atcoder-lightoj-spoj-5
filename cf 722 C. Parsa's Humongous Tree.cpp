
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=100005;

ll L[M],R[M],dp[M][2];
vector<ll> g[M];

///for every parent for one state we have to sum the childs best states

///dp[parent][0]=max(|L[parent]-L[child1]|+dp[child1][0], |L[parent]-R[child1]|+dp[child1][1] ) + other childs

void dfs(ll node,ll par)
{
    for(auto child:g[node])
    {
        if(child!=par)
        {
            dfs(child,node);

            dp[node][0]+=max(abs(L[node]-L[child])+dp[child][0],abs(L[node]-R[child])+dp[child][1]);

            dp[node][1]+=max(abs(R[node]-L[child])+dp[child][0],abs(R[node]-R[child])+dp[child][1]);
        }
    }
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {

        ll n;cin>>n;
        for(i=0;i<=n;i++)
        {
            g[i].clear();
            dp[i][0]=dp[i][1]=0; ///dp[i][0]=L,dp[i][1]=R

        }

        for(i=1;i<=n;i++)
        {
            cin>>L[i]>>R[i];
        }

        for(i=1;i<n;i++)
        {
            ll u,v;cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(1,-1);

        cout<<max(dp[1][0],dp[1][1])<<endl;


    }

    return 0;

}




