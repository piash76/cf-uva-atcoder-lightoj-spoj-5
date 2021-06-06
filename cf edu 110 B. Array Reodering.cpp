
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
const int M=500005;

ll a[M],ev[M],od[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        ll ev_no=0,od_no=0;

        for(i=0;i<n;i++)
        {
            ll x;cin>>x;
            if(x%2) od[od_no++]=x;
            else ev[ev_no++]=x;

        }

        ll ans=0;

        ll tot=ev_no-1;
        ll tot2=(tot*(tot+1))/2;

        ans+=tot2;

        ll tot3=(ev_no*od_no);
        ans+=tot3;

        for(i=0;i<od_no;i++)
        {
            for(j=i+1;j<od_no;j++)
            {
                ///cout<<"A{i] "<<a[i]<<"A{J} "<<a[j]<<endl;
                if(__gcd(od[i],2*od[j])>1) ans++;
            }
        }

        cout<<ans<<endl;




    }

    return 0;

}




