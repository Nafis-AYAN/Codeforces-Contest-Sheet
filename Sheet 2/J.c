#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for (int i=2 ; i<=n ; i++)
    {
        count=0;
        for (int j=2 ; j<=i ; j++)
        {
            if (i%j==0)
                count++;
        }
        if (count==1)
            printf("%d ",i);
    }
    return 0;
}
