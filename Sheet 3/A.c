#include<stdio.h>
int main()
{
    long long n, a[100000],sum=0;
    scanf("%lld",&n);
    for (int i=1 ; i<=n ; i++)
    {
        scanf("%lld",&a[i]);
        sum = sum + a[i];
    }
    if (sum > 0)
    {
        printf("%lld",sum);
    }
    else
    {
        printf("%lld",sum*-1);
    }
    return 0;
}

