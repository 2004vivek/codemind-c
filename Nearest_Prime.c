#include<stdio.h>
int prime(int n);
int main(){
    int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
    int n,i,d1,ap,bp,d2;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(prime(i))
        {
            ap=i;
            d1=i-n;
            break;
        }
    }
    for(i=n;;i--)
    {
            if(prime(i))
        {
            bp=i;
            d2=n-i;
            break;
        }
    }
    
        if(d1<d2)
        {
            printf("%d
",ap);
        }else if(d1>d2)
        {
            printf("%d
",bp);
        }else
        {
            printf("%d
",bp);
        }
    }

    }
    int prime(int n)
    {
    int i,c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }if(c==2)
    {
        return 1;
    }else
    {
        return 0;
    }
}