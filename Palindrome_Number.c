#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        int n,s=0,r,q;
        scanf("%d",&n);
        q=n;
        while(q!=0){
            r=q%10;
            s=s*10+r;
            q=q/10;
        }
        if(s==n){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}