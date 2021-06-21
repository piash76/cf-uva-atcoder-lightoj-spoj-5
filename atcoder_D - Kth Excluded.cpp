
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
ll a[M],pref[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    ll n,q;
    cin>>n>>q;
    for(i=0;i<n;i++) cin>>a[i];

    pref[0]=a[0]-1;

    for(i=1;i<n;i++) pref[i]=pref[i-1]+(a[i]-a[i-1]-1);

   // for(i=0;i<n;i++) cout<<pref[i]<<" ";
   // cout<<endl;

    while(q--)
    {
        ll k;cin>>k;

        if(k<a[0])
        {
            cout<<k<<endl;
        }
        else
        {


        ll l=0,h=n,s=n;

        while(l<=h)
        {
           /// cout<<"L "<<l<<" H "<<h<<endl;
            ll mid=(l+h)/2;
            if(pref[mid]>=k)
            {
                ///cout<<"MID "<<mid<<endl;
                s=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        ///cout<<"S "<<s<<endl;

        ll ans=s+k;

        cout<<ans<<endl;

        }

        ///cout<<endl;


    }

    return 0;

}




