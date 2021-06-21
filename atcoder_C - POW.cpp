
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
ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
   int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int ac_minus = c%2==1&&a<0;
	int bc_minus = c%2==1&&b<0;

	if(ac_minus!=bc_minus){
		if(ac_minus)puts("<");
		else puts(">");
	}else{
		if(abs(a)==abs(b))puts("=");
		else if(abs(a)<abs(b) ^ ac_minus)puts("<");
		else puts(">");
	}
    return 0;

}




