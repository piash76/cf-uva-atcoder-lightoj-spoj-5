#include<bits/stdc++.h>

using namespace std;
const int N = 1111111;

bool isprime[N+5];
ll prime[N+5],j;


void sieve()
{

    ll sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=1;
    for(ll i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }

    ll j=0;
    for(ll i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[j]=i;
            j++;
        }
    }

   /* for(ll i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/


}

long long  divisor(long long a)
{
    long long sum=1,c,i,sq;
    sq=sqrt(a)+1;  //whenever a is not square rootable
    for(i=0;prime[i]<sq;i++)
    {
        if(a%prime[i]==0)
        {
            c=0;
            while(a%prime[i]==0)
            {
                c++;
                a=a/prime[i];
            }
            sum*=(c+1);
        }
    }

    if(a>1)
    {
        sum=sum*2;
    }

    return sum;
}

ll countdivisor(int ll)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    sieve();
    long long x,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        cin>>x;
       cout<<divisor(x)<<endl;
    }
}


