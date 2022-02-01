#include<stdio.h>
int main()
{
    long long x,y,z;
    scanf("%lld %lld %lld",&x,&y,&z);
    if(x<=y && x<=z && y>=x && y>=z)
        {
        printf("%lld\n%lld\n%lld\n",x,z,y);
        printf("\n%lld\n%lld\n%lld",x,y,z);
        }
    else if(y<=x && y<=z && z>=x && z>=y)
    {
        printf("%lld\n%lld\n%lld\n",y,x,z);
        printf("\n%lld\n%lld\n%lld",x,y,z);
    }
    else if(x<=y && x<=z && y>=x && y<=z)
    {
        printf("%lld\n%lld\n%lld\n",x,y,z);
        printf("\n%lld\n%lld\n%lld",x,y,z);
    }
    else if(z<=x && z<=y && x>=z && x>=y)
    {
        printf("%lld\n%lld\n%lld\n",z,y,x);
        printf("\n%lld\n%lld\n%lld",x,y,z);
    }
    else if(y<=x && y<=z && x>=y && x>=z)
    {
        printf("%lld\n%lld\n%lld\n",y,z,x);
        printf("\n%lld\n%lld\n%lld",x,y,z);
    }
    else if(z<=y && z<=x && y>=x && y>=z)
    {
        printf("%lld\n%lld\n%lld\n",z,x,y);
        printf("\n%lld\n%lld\n%lld",x,y,z);
    }
    return 0;
}
