#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,t;
    scanf("%d",&n);
    sq=sqrt(n);
    t=sq*sq;
    if(t==n){
        printf("True");
    }
    else{
        printf("False");
    }
}