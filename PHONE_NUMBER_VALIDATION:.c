#include<stdio.h>
int main(){
    long long int n,r,c=0;
    scanf("%lld",&n);
    while(n!=0){
        r=n%10;
        c++;
        n=n/10;
    }
    if(c==10){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}