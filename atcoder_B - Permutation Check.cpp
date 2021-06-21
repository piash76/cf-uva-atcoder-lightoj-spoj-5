
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
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& x : A) {
        cin >> x;
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; ++i) {
        if (A[i] != i + 1) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;

    return 0;

}



