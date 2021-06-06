





///PROBLEM DESCRIPTION:number of square with all ones

///https://leetcode.com/problems/count-square-submatrices-with-all-ones/

#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6

int a[505][505],dp[505][505];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));

        ll n,m;cin>>n>>m;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
              cin>>a[i][j];
            }
        }

        /* for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
              cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;*/


        for(i=0;i<m;i++)
        {
            if(a[0][i]==1) dp[0][i]=1;
        }


         for(i=0;i<n;i++)
         {
            if(a[i][0]==1) dp[i][0]=1;

         }

         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 if(i==0 or j==0) continue;

                 if(a[i][j]==1)
                 {
                     //cout<<"I "<<i<<" J "<<j<<endl;

                     dp[i][j]=min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]))+1;
                 }
                 else  dp[i][j]=0;
             }
         }


         ll sum=0;
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
              // cout<<dp[i][j]<<" ";
               sum+=dp[i][j];
             }

             //cout<<endl;
         }

         cout<<sum<<endl;





    }

    return 0;

}





