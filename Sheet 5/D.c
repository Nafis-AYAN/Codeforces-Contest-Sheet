#include<stdio.h>
#include<math.h>
int main()
{
    nums();
}
void nums()
{
    long long n,t,count=0;
    scanf("%lld",&t);
    for (long long i=1 ; i<=t ; i++)
    {
        count=0;
        scanf("%lld",&n);
        if (n==1)
            printf("NO\n");
        else
        {
            for (long long i=2 ; i<=sqrt(n) ; i++)
            {
                if (n%i==0)
                {
                    count++;
                    break;
                }
            }
            if (count==0)
                printf("YES\n");
            else
                printf("NO\n");
        }

    }
}
