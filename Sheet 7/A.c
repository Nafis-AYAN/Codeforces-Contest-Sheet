#include<stdio.h>
void display (int num)
{
    if (num)
        display (num-1);
    else
        return;

    printf("I love Recursion\n");
}

int main()
{
    int limit;
    scanf("%d",&limit);
    display (limit);
    return 0;
}
