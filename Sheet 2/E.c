#include<stdio.h>
int main()
{
    int a,max,p;
    scanf("%d",&a);
    for (int i=1 ; i<=a ; i++)
    {
        scanf("%d",&p);
        if (i==1)
            max=p;
        else if (p>max)
            max=p;
    }
    printf("%d",max);
    return 0;
}
