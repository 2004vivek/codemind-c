#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,s=0,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sq=pow(r,2);
        s=s+sq;
        n=n/10;
        if(n==0 && s>9){
            n=s;
            s=0;
        }
    }
    if(s==1 || s==7){
        printf("True");
    }
    else{
        printf("False");
    }
}