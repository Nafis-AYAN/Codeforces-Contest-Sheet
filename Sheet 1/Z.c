#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if (b*log(a)>d*log(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
