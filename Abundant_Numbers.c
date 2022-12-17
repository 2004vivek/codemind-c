#include<stdio.h>
int main(){
    int n,fact=0,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
        fact=fact+i;
        }
    }
        if(fact>n){
            printf("True");
        }
        else{
            printf("False");
        }
}