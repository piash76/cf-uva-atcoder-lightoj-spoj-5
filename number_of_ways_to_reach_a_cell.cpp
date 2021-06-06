



///https://codeforces.com/blog/entry/77733
ll dp[500][500];

ll numberOfPaths()
{
   for(ll i=1;i<=m;i++)
			dp[1][i] = 1;              // we will set 1 in the first row as discussed earlier..

		for(ll i=1;i<=n;i++)
			dp[i][1] = 1;              // We will set 1 in the first column as discussed

		for(ll i=2;i<=n;i++)
		{
			for(ll j=2;j<=m;j++)
			{
				dp[i][j] = dp[i][j-1] + dp[i-1][j];
			}
		}

		return dp[n][m];
}
