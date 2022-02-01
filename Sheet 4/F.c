#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int t,len;
    scanf("%d",&t);
    for (int i=1 ; i<=t ; i++)
    {
        scanf("%s",&a);
        len = strlen(a);
        if (len>10)
        {
            printf("%c%d%c\n",a[0],len-2,a[len-1]);
        }
        else
        {
            printf("%s\n",a);
        }
    }
    return 0;
}
