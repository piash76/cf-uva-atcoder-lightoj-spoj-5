
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

using namespace std;

const int M=500005;

ll tree[4*M];

string st;


void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=1;
        return;
    }

    ll left=(2*node)+1;
    ll right=(2*node);
    ll mid=(b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    if(st[node]=='0') tree[node]=tree[left];
    else if(st[node]=='1') tree[node]=tree[right];
    else if(st[node]=='?') tree[node]=tree[left]+tree[right];


    ///cout<<"NODE "<<node<<"TREE "<<tree[node]<<endl;
    ///cout<<"ST "<<st[node]<<endl;


}

void update(ll idx)
{
    ll node=idx;
    while(node)
    {
         if(st[node]=='0') tree[node]=tree[(2*node)+1];
         else if(st[node]=='1') tree[node]=tree[2*node];
         else if(st[node]=='?') tree[node]=tree[(2*node)+1]+tree[2*node];

         node/=2;

    }

}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll k;cin>>k;
    string s;cin>>s;
    reverse(s.begin(),s.end());

    st="#"+s;

    ll n=(1<<k);

    build(1,1,n);

    //cout<<tree[1]<<endl;

    ll q;cin>>q;

    while(q--)
    {
        ll id;char ch;cin>>id>>ch;

        st[n-id]=ch;

        update(n-id);

        cout<<tree[1]<<endl;
    }




    return 0;

}




