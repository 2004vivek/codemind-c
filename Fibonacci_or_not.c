#include<stdio.h>
void fab(int n);
int main()
{
    int n;
    scanf("%d",&n);
    fab(n);
}
void fab(int n)
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
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
