#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a,b,c,d,x,y,k,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        if(c>a)
        {
            x=1;
        }
        else if(a%c!=0)
        {
            x=(a/c)+1;
        }
        else
        {
            x=(a/c);
        }
        if(d>b)
        {
            y=1;
        }
        else if(b%d!=0)
        {
            y=(b/d)+1;
        }
        else
        {
            y=(b/d);
        }

        if(x+y>k) cout<<-1<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }

}
