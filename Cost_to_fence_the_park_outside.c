#include<stdio.h>
int main(){
    int l,b,w,c,ar;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=((2*w+l)*(2*w+b)-(l*b))*c;
    printf("%d",ar);
}