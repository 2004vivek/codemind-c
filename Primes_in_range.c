#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int k=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==1)
    {
        return 1;
    }
    else
    return 0;
}

int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i)&&i!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}
