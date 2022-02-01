#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    double a=log2(n);
    if (a-(long long)a==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
