#include<stdio.h>
int main()
{
    int a,b,q,c,r,tc,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            //1
            r=q%10;
            c++;
            if(r!=0&&i%r==0)
            {
                tc++;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}