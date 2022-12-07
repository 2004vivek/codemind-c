#include<stdio.h>
#include<math.h>
int main(){
    int n,t,tc,q,sq,r;
    scanf("%d",&n);
    sq=n*n;
    q=n;
    int c=0;
    while(n!=0){
        c++;
        r=n%10;
        n=n/10;
    }t=pow(10,c);
    tc=sq%t;
    if(tc==q){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}
