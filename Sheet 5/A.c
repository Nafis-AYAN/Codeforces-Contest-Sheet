#include<stdio.h>

int sum (int n1 ,int n2)
{
     int sum;
     sum=n1+n2;
     return sum;
}

int main ()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int result = sum(a,b);
    printf("%d",result);
    return 0;
}
