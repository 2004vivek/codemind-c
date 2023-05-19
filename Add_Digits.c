#include<stdio.h>
int adddigit(int n){
    int r,s=0;
    while(n!=0){
    r=n%10;
    s=s+r;
    n=n/10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n>=10){
        n=adddigit(n);
    }
    printf("%d",n);
}