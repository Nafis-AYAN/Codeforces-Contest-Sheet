#include <stdio.h>
int main()
{
    int n, t, sumd = 0, remainder, sum=0, a, b;
    scanf("%d %d %d",&n, &a, &b);
    for(int i=1 ; i<=n ; i++)
    {
        t = i;
        sumd=0;
        while (t != 0)
        {
            remainder = t % 10;
            sumd       = sumd + remainder;
            t         = t / 10;
        }
        if (sumd>=a && sumd<=b)
        {
            sum = sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}
