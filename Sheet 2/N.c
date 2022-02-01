#include<stdio.h>
int main()
{
    char s;
    int n,i,b;
    scanf("%c",&s);
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        scanf("%d",&b);
        for (int j=1 ; j<=b ; j++)
        {
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}
