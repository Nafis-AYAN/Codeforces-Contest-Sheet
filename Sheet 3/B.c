#include<stdio.h>
int main()
{
    int n,x,tmp,i;
    long a[100000];
    scanf("%d",&n);
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d", &x);
    tmp = 0;
    for(i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            tmp = 1;
            break;
        }
    }
    if(tmp == 1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}
