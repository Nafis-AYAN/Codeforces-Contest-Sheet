#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long i,tmp,sum=0,n;
    char s[1000000];
    gets(s);
    tmp=atoi(s);
    while(tmp>0)
    {
        n=tmp%10;
        sum+=n;
        tmp=tmp/10;
    }
    printf("%lld",sum);

}
