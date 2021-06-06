#include<stdio.h>
int main()
{
    int n,temp,sum=0,r;
    printf("enter no");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("palindrome");

    }
    else
    {
        printf("not palindrome");
    }

}

