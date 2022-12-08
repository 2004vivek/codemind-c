#include<stdio.h>
void fab(int n);
int main(){
    int n;
    scanf("%d",&n);
    fab(n);
}void fab(int n){
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}