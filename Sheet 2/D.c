#include<stdio.h>
int main ()
{
    int i;
    for (i=1 ; i<=10000 ; i++)
    {
        scanf("%d",&i);
        if (i==1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
