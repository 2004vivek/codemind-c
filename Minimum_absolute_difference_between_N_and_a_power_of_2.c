#include<stdio.h>
#include<math.h>
int main(){
    int n,a=1,b,d1,d2;
    scanf("%d",&n);
    int p//=pow(2,a);
    while(p<n)
    {
        a++;
        p=pow(2,a);
        
    }
    d1=p-n;
    d2=abs(pow(2,(a-1))-n);
    int min=d1<d2?d1:d2;
    printf("%d",min);
}