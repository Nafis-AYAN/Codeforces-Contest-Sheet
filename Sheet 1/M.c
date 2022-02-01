#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if(x >= 'A' && x <='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(x >= 'a' && x <='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("IS DIGIT\n");
    }
    return 0;
}
