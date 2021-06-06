

///https://www.geeksforgeeks.org/count-distinct-occurrences-as-a-subsequence/


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;

//int dp[100005][10];

int main()
{
    speed()

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        string s2="LOL";

      ll n = s.size();
    ll m = s2.size();



	ll dp[m + 1][n + 1];

	for (ll i = 1; i <= m; i++)
		dp[i][0] = 0;

	for (ll j = 0; j <= n; j++)
		dp[0][j] = 1;


	for (i=1;i<=m;i++)  ///m is lol
    {
		for (j=1;j<=n;j++)
		{
			if (s2[i - 1] != s[j - 1]) dp[i][j] = dp[i][j - 1];

			else dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1];

		}
	}

	cout<<endl;

	for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }




    cout<<dp[m][n]<<endl;






    }

}

