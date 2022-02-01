#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,s,t,tmp;
    scanf("%d\n%d\n%d",&a,&b,&c);
    p=a+b*c;
    q=a*(b+c);
    r=a*b*c;
    s=(a+b)*c;
    t=a+b+c;
    if (p<q)
    {
        tmp=p;
        p=q;
        q=tmp;
    }
    if (q<r)
    {
        tmp=q;
        q=r;
        r=tmp;
    }
    if (r<s)
    {
        tmp=r;
        r=s;
        s=tmp;
    }
    if (s<t)
    {
        tmp=s;
        s=t;
        t=tmp;
    }
    if (p<q)
    {
        tmp=p;
        p=q;
        q=tmp;
    }
    if (q<r)
    {
        tmp=q;
        q=r;
        r=tmp;
    }
    if (r<s)
    {
        tmp=r;
        r=s;
        s=tmp;
    }
    if (p<q)
    {
        tmp=p;
        p=q;
        q=tmp;
    }
    if (q<r)
    {
        tmp=q;
        q=r;
        r=tmp;
    }
    if (p<q)
    {
        tmp=p;
        p=q;
        q=tmp;
    }
    printf("%d",p);
    return 0;
}
