#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int i,j,n,m,k,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if( ((a+b)%3==0)&&  ((2*a-b>=0) && (2*b-a)>=0) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    see_you;

}
