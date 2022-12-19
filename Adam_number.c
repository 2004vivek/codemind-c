#include<stdio.h>
int main(){
    int n,s=0,r,sq,sqr,s1=0,r1;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    sqr=s*s;
    while(sqr!=0){
        r1=sqr%10;
        s1=s1*10+r1;
        sqr=sqr/10;
    }
    if(s1==sq){
        printf("True");
    }
    else{
        printf("False");
    }
}