#include<bits/stdc++.h>
#define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    godspeed()
    string a,s;
    ll n,l,i;
    cin>>l;
    cin>>s;
    n=s.size();
    if(n%l)
    {
        string a="1";
        for(i=1;i<=l-1;i++)
        {
            a+="0";
        }
        for(i=1;i<=(n/l)+1;i++)
        {
            cout<<a;
        }
    }

}
