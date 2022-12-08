#include<stdio.h>
int fab(int n);
int main()
{
    int n,d1,d2,ap,bp,i;
    scanf("%d",&n);
    fab(n);
    for(i=n+1;;i++)
    {
        if(fab(i)){
            ap=i;
            d1=i-n;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(fab(i)){
            bp=i;
            d2=n-i;
            break;
        }
    }
     if(d1<d2)
     {
         printf("%d",ap);
     }
     else if(d1>d2)
     {
        printf("%d",bp);
     }
     else
     {
         printf("%d %d",bp,ap);
     }
}
int fab(int n)
{
    int a=0,b=1,c,i,count=0;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            count=1;
        }
    }
        if(count==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
}