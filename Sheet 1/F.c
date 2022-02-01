#include<stdio.h>
int main()
{
    long long m,n;
    scanf("%lld %lld",&m,&n);
    printf("%lld",(m%10 + n%10));
    return 0;
}
