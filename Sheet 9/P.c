#include<stdio.h>
int main()
{
    long long n,ans;
    scanf("%lld",&n);
    if (n%2==0)
        ans=n/2;
    else
        ans=((n-1)/2)-n;
    printf("%lld",ans);
}
