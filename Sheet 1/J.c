#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a%b==0 || b%a==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}
