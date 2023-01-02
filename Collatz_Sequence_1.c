#include<stdio.h>
int number(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",n);
    while(n!=1){
        if(number(n)==1){
            n=n/2;
            printf("%d ",n);
        }
        else{
            n=3*n+1;
            printf("%d ",n);
        }
    }
}
int number(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}