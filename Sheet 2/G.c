#include<stdio.h>
int main()
{
    int t;
    long long n,mul=1;
    scanf("%d",&t);
    for (int i=1 ; i<=t ; i++)
    {
        scanf("%lld",&n);
        mul=1;
        for (int i=1 ; i<=n ; i++)
        {
            mul = mul*i;
        }
        printf("%lld\n",mul);
    }
    return 0;
}
