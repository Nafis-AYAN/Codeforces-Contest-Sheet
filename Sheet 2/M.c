#include<stdio.h>
int main()
{
    int a,b,c,rem,count=0,countD=0,countL=0;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++)
    {
        countD=0;
        count=0;
        c=i;
        while(c!=0)
        {
            rem=c%10;
            if(rem==4 || rem==7 )
            {
                count++;
            }
            c=c/10;
            countD++;
        }
        if(countD==count)
        {
            printf("%d ",i);
            countL++;
        }
    }
    if(countL==0)
    {
        printf("-1");
    }
    return 0;
}
