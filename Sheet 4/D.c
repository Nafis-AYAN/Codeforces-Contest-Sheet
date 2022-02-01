#include<stdio.h>
int main()
{
    char a[100],b[100],c[100];
    scanf("%s %s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    strcpy(c,a);
    strcat(a,b);
    puts (a);
    char tmp = c[0];
    c[0] = b[0];
    b[0] = tmp;
    printf("%s %s",&c,&b);
}
