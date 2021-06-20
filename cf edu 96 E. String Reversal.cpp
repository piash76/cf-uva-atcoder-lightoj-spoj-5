
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

const int maxn = 200009;


ll a[maxn],tree[4*maxn],lazy[4*maxn],b[maxn];

ll n;string s;
map<char,queue<ll> > m;



void update(ll node,ll b,ll e,ll i,ll j, ll val)
{

    if(lazy[node]!=0)
    {
        ll lz=lazy[node];
        tree[node]+=lz*(e-b+1);
        lazy[node]=0;

        if(b!=e)
        {
            lazy[2*node]+=lz;
            lazy[2*node+1]+=lz;
        }

    }


    /// no overlap
    if (i > e || j < b)  return;

    ///total overlap

    if (b >= i && e <= j)
    {
        tree[node]+=val*(e-b+1);

        if(b!=e)
        {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }


        return;
    }

    ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;
    update(left, b, mid, i, j, val);
    update(right, mid + 1, e, i, j, val);

    tree[node]=( tree[left]+tree[right] );

}

ll query(ll node,ll b,ll e,ll i,ll j)
{


    if(lazy[node]!=0)
    {
        ll lz=lazy[node];
        tree[node]+=lz*(e-b+1);
        lazy[node]=0;

        if(b!=e)
        {
            lazy[2*node]+=lz;
            lazy[2*node+1]+=lz;
        }


    }

    /// no overlap
    //if (i > e || j < b)  return inf;
    if (i > e || j < b)  return 0;

    ///total overlap

    if (b >= i && e <= j)
    {

        return tree[node];
    }

    ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;

    ll x = query(left, b, mid, i, j);
    ll y = query(right, mid + 1, e, i, j);

    return (x+y);

}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>n>>s;

    for(i=0;i<n;i++)
    {
        m[s[i]].push(i);
    }
    string rev=s;
    reverse(rev.begin(),rev.end());


    ll ans=0;
    for(i=0;i<n;i++)
    {
        ll req=i;
        ll prev=m[rev[i]].front();
        m[rev[i]].pop();

       // cout<<"St "<<rev[i]<<endl;
       // cout<<"PREV "<<prev<<endl;

        ll q=query(1,0,n-1,prev,prev);

        //cout<<"Q "<<q<<endl;

        ll cur=prev+q;

        ans+=(cur-req);

        update(1,0,n-1,0,prev-1,1);

    }

    cout<<ans<<endl;





    return 0;

}




