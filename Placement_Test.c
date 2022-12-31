#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        int x,n,c;
        scanf("%d%d",&x,&n);
        c=(x*n)/10;
        printf("%d
",c);
    }
}