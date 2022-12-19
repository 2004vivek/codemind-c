#include<stdio.h>
int main()
{
    int n,i,avg,a=0,c=0;
    scanf("%d",&n);
    int x[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        a=a+x[i];
    }
    avg=a/n;
    for(i=0;i<n;i++)
    {
        if(x[i]>=avg)
        {
        c++;
        }
    }
    printf("%d",c);
    
    
}