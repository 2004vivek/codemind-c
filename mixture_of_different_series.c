#include<stdio.h>
#include<math.h>
int main(){
        int n,k1=0,k2=0,i,a,b;
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            if(i%2==0){
                a=pow(2,k1)-1;
                printf("%d ",a);
                k1++;
                
            }
            else{
                printf("%d ",k2);
                b=3*k2+2;
                k2=b;
            }
        }
    }