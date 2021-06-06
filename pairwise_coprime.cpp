#include<bits/stdc++.h>
#define ll                long long int
#define ld                long double
#define F                 first
#define S                 second
#define C                 continue
#define G                 goto done
#define pb                push_back
#define pf                push_front
#define ppb               pop_back
#define ppf               pop_front
#define sz                size()
#define pi                acos(-1.0)
#define mod               1000000007
#define maxe              *max_element
#define mine              *min_element
#define min3(a,b,c)       min(a,min(b,c))
#define max3(a,b,c)       max(a,max(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define mem(a,b)          memset(a,b,sizeof(a))
#define all(a)            (a).begin(),(a).end()
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          ((a)*((b)/gcd(a,b)))
#define case(a)           cout<<"Case "<<(a)<<": "
#define point(a)          fixed<<setprecision(a)
#define get(a)            for(auto &x:a) cin>>x;
#define print(a)          for(auto x:a) cout<<x<<" "; cout<<endl;
#define uniq(a)           sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define big(a)            transform((a).begin(),(a).end(),(a).begin(),::toupper)
#define small(a)          transform((a).begin(),(a).end(),(a).begin(),::tolower)
#define ischar(a)         (('a'<=a&&a<='z')('A'<=a&&a<='Z'))
#define isvowel(a)        (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
#define fast              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc                int test; cin>>test; while(test--)
using namespace std;
int main()
{
    ll n; cin>>n; ll a[n]; get(a);
    ll g=a[0],f=0;
    for(ll i=1;i<n;i++) g=gcd(g,a[i]);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll k=a[i];
        for(ll j=1;j*j<=k;j++)
        {
            if(k%j==0)
            {
                ll x=j;
                ll y=k/j;
                if((mp[x]==1 && x!=1) || (mp[y]==1 && y!=1))
                {
                    f=1; break;
                }
                mp[x]=1;mp[y]=1;

            }
        }
    }


    //cout<<f<<endl;
    if(f==0) cout<<"pairwise coprime";
    else if(g==1) cout<<"setwise coprime";
    else cout<<"not coprime";
}





/*
  In the name of ALLAH
  Author : Raashid Anwar
*/

#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int M1 =  998244353;
const int M2 =  1000000007;
mt19937 rng((uint64_t)chrono::steady_clock::now().time_since_epoch().count());

int cnt[1000001];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, g = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
    g = __gcd(g, x);
  }
  bool ok = true;
  for(int i = 2; i <= 1000000; i++) {
    int x = 0;
    for(int j = i; j <= 1000000; j += i)
      x += cnt[j];
    if(x > 1) {
      ok = false;
      break;
    }
  }
  if(ok)
    cout << "pairwise coprime\n";
  else if(!ok && g == 1)
    cout << "setwise coprime\n";
  else
    cout << "not coprime\n";
}












