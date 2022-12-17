#include<stdio.h>
int main()
{
    int l,i,u;
    scanf("%d%d",&l,&u);
    for(i=1;i<=u;i=i+2)
    {
        printf("%d x %d = %d
",l,i,l*i);
    }
}