#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,s=0,sum=0,diff,i,sqr;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sq=pow(i,2);
        s=s+sq;
    }
    for(i=1;i<=n;i++){
        sum=sum+i;
        sqr=pow(sum,2);
    }
    
    diff=abs(s-sqr);
    printf("%d",diff);
    
}