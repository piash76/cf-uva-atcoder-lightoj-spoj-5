
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



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll ar[5];
        ll w,x,y,z;cin>>w>>x>>y>>z;

        ar[0]=w;
        ar[1]=x;
        ar[2]=y;
        ar[3]=z;

        sort(ar,ar+4);



        ll p1=max(w,x);

        ll p2=max(y,z);

        //cout<<p1<<" "<<p2<<endl;

        if(p1==ar[3] and p2==ar[2]) cy;
        else if(p1==ar[2] and p2==ar[3]) cy;
        else cn;


    }

    return 0;

}




