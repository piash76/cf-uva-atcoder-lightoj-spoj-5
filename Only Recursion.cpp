#include<bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if(a==1) return 1;
    else
        return factorial(a-1)*a;

}

int main()
{
    int n,i,j;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
