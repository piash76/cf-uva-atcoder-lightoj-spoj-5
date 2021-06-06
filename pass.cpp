#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t,i,k,l,f,g,j,m;
    char x[10003];
  cin>>g;
  for(j=0;j<g;j++)
  {
      f=0;
      scanf(" %[^\n]s",x);
      for(i=0;x[i]!='\0';i++)
      {
          if(x[i]=='a' && f==0)
          {
              x[i]='@';
          }
         else if(x[i]=='s' && f==0)
          {
              x[i]='$';
          }
         else if(x[i]=='b' && f==0)
          {
              x[i]='3';
          }
        else if(x[i]=='o' && f==0)
          {
              x[i]='0';
          }
        else  if(x[i]=='l' && f==0)
          {
              x[i]='1';
          }
         else if(x[i]==' ')
          {
              f=1;
              for(m=i;m<x[i]!='\0';m++)
              {
                  x[m]=x[m+1];
              }
              break;

          }
}

      cout<<x<<endl;
}
}
