#include<stdio.h>
int adddigit(int n);
int main(){
    int n,x,y;
    scanf("%d",&n);
     while(n>=10)
     {
         n=adddigit(n);
     }
     printf("%d",n);
    
}
int adddigit(int n){
    int r,s=0;
    while(n){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}