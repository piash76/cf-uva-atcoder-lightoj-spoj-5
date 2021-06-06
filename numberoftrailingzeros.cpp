#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll trailingzero(ll n) //trailing zero in a factorial
{
    ll c=0;
    for(ll i=5;n/i>=1;i*=5)
    {
      c+=n/i;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<trailingzero(n)<<endl;

}


