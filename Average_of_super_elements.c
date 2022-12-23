#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,count=0,s=0;
    double avg;
    for(i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==a[i])
        {
            count++;
            s=s+a[i];
            a[i]=0;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        avg=(s*1.0)/(count*1.0);
        printf("%.2lf",avg);
    }
}