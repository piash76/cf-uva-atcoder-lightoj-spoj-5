




#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;

bool palindrome(string &s)
{
    ll l=s.size();
    bool f=true;
    for(ll i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1]) {f=false;break;}
    }
    return f;
}
string con(ll n)
{
    string s="";
    ll tmp=n;
    while(tmp)
    {
        ll r=tmp%10;
        char ch=r+'0';
        s+=ch;
        tmp/=10;
    }

    reverse(s.begin(),s.end());
    return s;
}

string fun(ll sec)
{
    string ans="";

    ll h = (sec/3600);

	ll m = (sec -(3600*h))/60;

	ll s = (sec -(3600*h)-(m*60));

    ///cout<<h<<" "<<m<<" "<<s<<endl;



	if(h==0) ans+="00";
	else if(h>0 and h<=9) ans+="0";
    string st=con(h);
	ans+=st;

	if(m==0) ans+="00";
	else if(m>0 and m<=9) ans+="0";
    st=con(m);
	ans+=st;

	if(s==0) ans+="00";
	else if(s>0 and s<=9) ans+="0";
    st=con(s);
	ans+=st;

	return ans;

}

const int maxn = 86400; ///24 hr=86400s
ll dp[maxn+100];




int main()
{
    speed()
    ll t,i,j;

    memset(dp,0,sizeof(dp));

    dp[0]=1;
    for(i=1;i<=86405;i++)
    {
        dp[i]=dp[i-1];
        string st=fun(i);

        //cout<<"ST "<<st<<endl;

        if(palindrome(st)) dp[i]++;

        //if(i==1) cout<<st<<" "<<dp[1]<<endl;
    }

   // for(i=1;i<=10;i++) cout<<dp[i]<<" ";
   // cout<<endl;


    scanf("%lld",&t);

    while(t--)
    {


        char a[10],b[10];

        scanf("%s",a);
        scanf("%s",b);


        ll time1=0,time2=0;

       // cout<<(a[0]-'0')*10+ (a[1]-'0')<<endl;

        time1=( (a[0]-'0')*10+ (a[1]-'0') )*60*60;
        time1+=( (a[3]-'0')*10+ (a[4]-'0') )*60;
        time1+=( (a[6]-'0')*10+ (a[7]-'0') );


        time2=( (b[0]-'0')*10+ (b[1]-'0') )*60*60;
        time2+=( (b[3]-'0')*10+ (b[4]-'0') )*60;
        time2+=( (b[6]-'0')*10+ (b[7]-'0') );


        ll ans=dp[time2];
        if(time1!=0) ans-=dp[time1-1];



        printf("%lld\n",ans);



    }

}

