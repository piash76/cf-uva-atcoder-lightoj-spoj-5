
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

const int M=105;

ll a[M],dp[M][90009];
ll n;

ll solve(ll idx,ll sum)
{
    if(sum==0) return 1;

    if(idx>=n)
    {
        return 0;
        ///if(sum==0) return 1;
       /// else return 0;

    }

    if(dp[idx][sum]!=-1) return dp[idx][sum];

    ll s=solve(idx+1,sum-a[idx]) || solve(idx+1,sum);

    return dp[idx][sum]=s;
}




int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    memset(dp,-1,sizeof(dp));

    ll t,i,j;

    ll sum=0;
    cin>>n;
    for(i=0;i<n;i++) { cin>>a[i];sum+=a[i]; }

    ll ans=LLONG_MAX;

    for(i=0;i<=(sum/2);i++)
    {
        if(solve(0,i))
        {
            ll s1=i;
            ll s2=sum-i;

            ll mx=max(s1,s2);

            ans=min(ans,mx);
        }

    }

    cout<<ans<<endl;







    return 0;

}




