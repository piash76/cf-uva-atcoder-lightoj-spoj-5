

///https://codeforces.com/blog/entry/22317
///https://www.spoj.com/problems/NUMDIV/

#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;
#define ll long long


using u64 = uint64_t;
using u128 = __uint128_t;

///O(log(d))

///returns /* Calculate ( a^b ) %c */
u64 binpower(u64 base, u64 e, u64 mod)
{
    u64 result = 1;
    base %= mod;
    while(e){
        if(e & 1)
            result = (u128) result * base % mod;
        base = (u128) base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_compsite(u64 n, u64 a,u64 d,  int s)
{
    u64 x = binpower(a, d, n);
    if(x == 1 || x == n - 1)  ///this is prime
        return false;
    for(int r = 1; r < s; r++)
    {
        x = (u128)x * x % n;
        if(x == n - 1)        ///this is prime
            return false;
    }
    return true;
};

bool MillerRabin(u64 n) /// returns true if n is probably prime, else returns false.
{
    if(n%2==0) return false;

    if(n < 2)
        return false;

    int s = 0;
    u64 d = n - 1;

     ///d=2^s * d
    ///where if d is odd

    while((d & 1) == 0)
    {
        d >>= 1;
        s++;
    }

   /// 2, 325, 9375, 28178, 450775, 9780504, 1795265022

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_compsite(n, a, d, s))
            return false;
    }
    return true;
}

bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}

bool isprime_square(ll n)
{
    long double n1=n;
    return isPerfectSquare(n1);

}





const int N = 10000005;
const int SZ = 5761455 + 3;
///const int SZ=1e6;
bool isprime[N+5];
ll prime[N+5],tot;
//bitset<N> isprime;




void sieve()
{

    ll sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(ll i=3;i<=sq;i+=2) ///O(nlog(log(n)));
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }


    for(ll i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[tot]=i;
            tot++;
        }
    }


}

ll number_of_divisor(ll n)
{
    ll sum=1,i;
    for(i=0;prime[i]*prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            ll c=0;
            while(n%prime[i]==0)
            {
                c++;
                n/=prime[i];
            }
            sum*=(c+1);
        }

    }
    ll p1=sqrtl(n);
    if(n>1)
    {

    if(MillerRabin(n)) sum*=2;  ///it can be only prime greater than 1e6
    else if(p1*p1==n) sum*=3;  ///it can be the square of prime
    else sum*=4; ///it can be product of two prime greater than 1e6

    }


    return sum;



}



int main()
{

flash();
    sieve();
    ll i,j,t,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll ans=number_of_divisor(n);
        printf("%lld\n",ans);
    }




}




