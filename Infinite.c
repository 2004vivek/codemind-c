#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;;i++)
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