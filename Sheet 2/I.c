#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    scanf("%d",&n);
    int tmp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n/10;
    }
    printf("%d\n",rev);
    if (tmp == rev)
        printf("YES");
    else
        printf("NO");
    return 0;
}
