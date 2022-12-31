#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,r,r1,s=0,s1=0,sqr;
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