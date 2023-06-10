#include<stdio.h>
int main(){
    int a,b,s=0,sum=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            s=s+i;
        }
    }
     for(int j=1;j<=b/2;j++){
        if(b%j==0){
            sum=sum+j;
        }
    }
    if(s==b &&sum==a){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}