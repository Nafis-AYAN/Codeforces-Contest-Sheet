#include<stdio.h>
int main()
{
    long long a[100000],n,count=0;
    scanf("%lld",&n);
    for (int i=1 ; i<=n ; i++)
    {
        count=0;
        scanf("%lld",&a[i]);
        for (int j=1 ; j<=a[i] ; j++)
        {
            if (a[i]%j==0)
                count++;
        }
        if (count==3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
