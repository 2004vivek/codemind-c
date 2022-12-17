#include<stdio.h>
int main(){
int r,i;
scanf("%d",&r);
for(i=1;i<=r;i++){
    int n,fact=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d
",fact);
   }
}