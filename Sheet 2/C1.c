#include<stdio.h>
int main()
{
    int n,ev=0,od=0,pos=0,neg=0;
    long a[1000];
    scanf("%d",&n);
    ev=0;
    od=0;
    pos=0;
    neg=0;
    for (int i=1 ; i<=n ; i++)
    {
        scanf("%d",&i);
        if (i%2==0)
        {
            ev++;
        }

        if (i%2!=0)
        {
            od++;
        }

        if (i>0)
        {
            pos++;
        }

        if (i<0)
        {
            neg++;
        }
    }
    printf("Even: %d\n",ev);
    printf("Odd: %d\n",od);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

}
