#include<stdio.h>
#include<math.h>
int main(){
    int n,k1=1,k2=1,a,b,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            a=pow(2,k1)-1;
            printf("%d ",a);
            k1++;
            
        }
        else{
            b=pow(3,k2)-1;
            printf("%d ",b);
            k2++;
        }
    }
}