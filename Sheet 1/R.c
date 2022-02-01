#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d years\n",a/365);
    printf("%d months\n",(a%365)/30);
    printf("%d days",(a%365)%30);
    return 0;
}
