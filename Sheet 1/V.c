#include<stdio.h>
int main()
{
    int  a,b;
    char s;
    s='>','<','=';
    scanf("%d %c %d",&a,&s,&b);
    if(s=='>' && a>b)
    {
        printf("Right");
    }
    else if(s=='<' && a<b)
    {
        printf("Right");
    }
    else if (s=='=' && a==b)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}
