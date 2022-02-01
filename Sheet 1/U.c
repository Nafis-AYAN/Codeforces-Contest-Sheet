#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d.%d",&a,&b);
    if(b>0)
    {
        printf("float %d 0.%d\n",a,b);
    }
    else
    {
        printf("int %d\n",a);
    }
    return 0;
}
