#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n==0)
    {
        printf("1");
        return 0;
    }
    else
    {
        for (int i=1 ; i<=n ; i+=4)
        {
            if (n==i)
            {
                printf("8");
                return 0;
            }
        }
        for (int i=2 ; i<=n ; i+=4)
        {
            if (n==i)
            {
                printf("4");
                return 0;
            }
        }
        for (int i=3 ; i<=n ; i+=4)
        {
            if (n==i)
            {
                printf("2");
                return 0;
            }
        }
        for (int i=4 ; i<=n ; i+=4)
        {
            if (n==i)
            {
                printf("6");
                return 0;
            }
        }
    }
}
