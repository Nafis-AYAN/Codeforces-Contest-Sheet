#include<stdio.h>
int main()
{
    char x[20],y[20];
    scanf("%s %s",&x,&y);
    int a=strlen(x);
    int b=strlen(y);
    if (a<b)
        puts(x);
    else
        puts(y);
}
