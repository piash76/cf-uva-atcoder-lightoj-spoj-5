#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=min(a,b);
        y=(a+b+c)/3;
        cout<<min(x,y)<<endl;

    }
}
