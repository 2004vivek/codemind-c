#include<stdio.h>
int main(){
    int n,i,k1=0,k2=0,a;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            a=2*k1;
            printf("%d ",a);
            k1++;
        }
        else{
            printf("%d ",k2);
            k2++;
        }
    }
}