#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n==-1)
        {
            break;
        }
        else
        {
            printf("%d
",n*n);
            scanf("%d",&n);
        }
    }
}