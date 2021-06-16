
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

const int M=200005;
ll a[M];

int main()
{

    ll t,i,j;ll n;
    scanf("%lld",&n);


    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    ll ans=0,hp=0;
    priority_queue<ll,vector<ll>,greater<ll> > q;

    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            hp+=a[i];
            ans++;
        }
        else
        {
            q.push(a[i]);
            if(hp+a[i]<0)
            {
                hp+=a[i];
                ans++;

                while(!q.empty())
                {
                    if(hp>=0) break;

                    ll x=q.top();
                    q.pop();

                    hp-=x;
                    ans--;
                }

            }
            else
            {
                hp+=a[i];
                ans++;

            }
        }

    }



    printf("%lld\n",ans);


    return 0;

}




