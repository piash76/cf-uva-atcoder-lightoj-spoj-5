#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num,i;
    while(1)
    {
      vector<long long >v;

     scanf("%lld",&num);
     if(num==0) return 0;
       if(num<0)
       {

         num=num*-1;
       }

       for(i=2;i*i<=num;i++)
       {
         if(num%i==0)
         {

            v.push_back(i);
            num=num/i;

            i=1;
         }
       }
       v.push_back(num);
       sort(v.begin(),v.end());
       if(v.size()>1)
       {
           printf("%lld\n",v[v.size()-1]);

       }
       else
       {
           printf("-1\n");
       }
      v.clear();

    }

}
