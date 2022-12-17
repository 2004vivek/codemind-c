#include<stdio.h>
int main(){
    int n,s=0,p=1,diff,r,q;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    diff=p-s;
    printf("%d",diff);
}