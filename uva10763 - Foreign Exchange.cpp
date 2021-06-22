
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

    ll n;
    while(cin>>n)
    {
        map<ll,ll> in,out;


        if(n==0) break;

        for(i=1;i<=n;i++)
        {
            ll x,y;cin>>x>>y;

            in[y]++;
            out[x]++;

        }

        bool f=true;

        for(auto x:in)
        {
            if(in[x.ff]!=out[x.ff]) {f=false;break;}
        }

         for(auto x:out)
        {
            if(in[x.ff]!=out[x.ff]) {f=false;break;}
        }


        if(f) cy;
        else cn;
    }


    return 0;

}


/*

10
1 2
2 1
3 4
4 3
100 200
200 100
57 2
2 57
1 2
2 1
10
1 2
3 4
5 6
7 8
9 10
11 12
13 14
15 16
17 18
19 20
0

*/



