#include<stdio.h>
#include<math.h>
int main(){
    int n,i,k1=0,k2=-2,a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            a=pow(3,k1)+2;
            printf("%d ",a);
            k1++;
        }
        else{
            printf("%d ",k2);
            b=5*k2+12;
            k2=b;
        }
    }
}