#include<stdio.h>
int main()
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%lld\n%c\n%.2f\n%.1f\n",a,b,c,d,e);
    return 0;
}
