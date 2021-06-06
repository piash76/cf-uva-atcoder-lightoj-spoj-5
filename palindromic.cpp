   #include<bits/stdc++.h>
   #include<string>
   #define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   #define ll long long
    using namespace std;

    int main()
    {
    int t,f,l,j;
     cin>>t;
    for(int i = 1; i <= t; i++){
        char s[101];
        scanf("%s",s);
         f = 0;
         l= strlen(s);
        for(int j = 0; j < l; j++)
            {
            if(s[j]!= s[l-j-1])
                {
                f = 1;
                break;
              }
        }
        if(f!=1)printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
    }
