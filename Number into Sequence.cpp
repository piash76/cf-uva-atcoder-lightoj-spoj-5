




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 100000007;


const int mx =1000009;///1e6
ll a[mx];

const int N = 10000005;
const int SZ = 5761455 + 3;
///const int SZ=6000000;
///const int SZ=1e6;
bool isprime[N+5];
ll prime[SZ+5],tot;
//bitset<N> isprime;




void sieve()
{

    ll sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(ll i=3;i<=sq;i+=2) ///O(nlog(log(n)));
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }

   // ll j=0;
    for(ll i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[tot]=i;
            tot++;
        }
    }
  /*  cout<<j<<endl; ///86537

    for(ll i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/


}





int main()
{


    speed()

    sieve();

    ll t,i,j,cas=0;
    cin>>t;
    //while(t--)
    while(t--)
    {
        ll n;
        //n=i;
        cin>>n;


            ll num=n;

            ll mxcnt=-1,mxd=-1;
        for(j=0;prime[j]*prime[j]<=num;j++)
        {
            if(n%prime[j]==0)
            {
                ll c=0,s=1;
                while(n%prime[j]==0)
                {
                    s*=prime[i];
                    c++;
                   // cout<<"PRIME "<<prime[j]<<endl;

                    n/=prime[j];

                }

                if(c>mxcnt)
                {
                    mxcnt=c;

                    mxd=prime[j];
                }
            }
        }

        if(n!=1)
        {
             if(1>mxcnt)
                {
                    mxcnt=1;

                    mxd=n;
                }

        }

       // cout<<mxcnt<<" "<<mxd<<endl;

       // cout<<"FACTOR "<<endl;
       //for(auto x:pf) cout<<x<<" ";
       // cout<<endl;

       vector<ll> ans;

       ll s=1;

       for(i=1;i<mxcnt;i++)
       {
           ans.push_back(mxd);
           s*=mxd;
       }
       ans.push_back(num/s);


       // if(ans.size()==0) ans.push_back(n);

        cout<<ans.size()<<endl;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;







       // cout<<endl;










    }

    return 0;

}





