
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

ll dp[M],dp2[M][2];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        memset(dp2,0,sizeof(dp2));

        string s;cin>>s;

        ll n=s.size();

        dp[n-1]=1;

        dp2[n-1][0]=dp2[n-1][1]=1;


        for(i=n-2;i>=0;i--)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='1')
                {
                    dp[i]=1+dp[i+1];
                }
                else if(s[i+1]=='0')
                {
                    dp[i]=1;
                }
                else if(s[i+1]=='?')
                {
                    dp[i]=1+dp2[i+1][1];
                }

            }
            else if(s[i]=='1')
            {
                if(s[i+1]=='0')
                {
                    dp[i]=1+dp[i+1];
                }
                else if(s[i+1]=='1')
                {
                    dp[i]=1;
                }
                else if(s[i+1]=='?')
                {
                    dp[i]=1+dp2[i+1][0];
                }

            }
            else if(s[i]=='?')
            {
                if(s[i+1]=='0')
                {
                    dp2[i][0]=1;
                    dp2[i][1]=1+dp[i+1];

                    dp[i]=max(dp2[i][0],dp2[i][1]);
                }
                else if(s[i+1]=='1')
                {
                   dp2[i][0]=1+dp[i+1];
                   dp2[i][1]=1;

                   dp[i]=max(dp2[i][0],dp2[i][1]);
                }
                else if(s[i+1]=='?')
                {
                    dp2[i][0]=1+dp2[i+1][1];
                    dp2[i][1]=1+dp2[i+1][0];

                    ///cout<<"0 "<<dp2[i][0]<<" 1 "<<dp2[i][2]<<endl;

                    ///cout<<max()

                    dp[i]=max(dp2[i][0],dp2[i][1]);

                }
            }

        }


        ll ans=0;

        for(i=0;i<n;i++)
        {
           /// cout<<"dp "<<dp[i]<<endl;
            ans+=dp[i];
        }

        cout<<ans<<endl;


    }

    return 0;

}


 
