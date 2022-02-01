#include<stdio.h>
int main()
{
    float a,b,x;
    scanf("%f %f",&a,&b);
    x=a/b;
    printf("floor %.0f / %.0f = %.0f\n",a,b,floor(x));
    printf("ceil %.0f / %.0f = %.0f\n",a,b,ceil(x));
    printf("round %.0f / %.0f = %.0f\n",a,b,round(x));
   return 0;
}
