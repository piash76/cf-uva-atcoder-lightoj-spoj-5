
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

pll seg[M];

/*bool cmp(pll x,pll y)
{
    if(x.ff!=y.ff) return x<y; ///increasing according to left end
    else return x>y;
}*/

int main()
{





    ll t,i,j,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        if(cas) cout<<"\n";

        cas++;

        ll m;scanf("%lld",&m);

        ll idx=0;


        ll l,r;
        while(scanf("%lld %lld",&l,&r)!=EOF)
        {
            if(l==0 and r==0) break;
            seg[idx].first=l;
            seg[idx].second=r;
            idx++;

        }

        sort(seg,seg+idx);

        ll left=0,right=0;
        vector<pll> ans;


        ll i=0;
        while(left<m and i<idx)
        {
            right=0;
            bool f=false;

            for(;i<idx and seg[i].first<=left;i++)
            {
                if(seg[i].first<=left)
                {
                    if(seg[i].second>right)
                    {
                        right=seg[i].second;
                        f=true;
                    }
                }


            }

            if(f)
            {
                ans.push_back({left,right});
                left=right;
            }
            else break;
        }

        if(left>=m)
        {

        ll na=ans.size();

        printf("%lld\n",na);
        for(auto x:ans) printf("%lld %lld\n",x.ff,x.ss);

        }
        else printf("0\n");


    }

    return 0;

}

/*

2
1
-1 0
-5 -3
2 5
0 0
1
-1 0
0 1
0 0


*/




