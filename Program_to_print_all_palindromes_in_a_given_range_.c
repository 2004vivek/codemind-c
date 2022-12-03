#include<stdio.h>
int pal(int n);
int main(){
    int l,u,i;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++){
        if(pal(i)){
            printf("%d ",i);
        }
    }
}
int pal(int n){
    int i,r,s=0,q;
    q=n;
    while(q!=0){
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n){
        return s;
    }
    else{
        return 0;
    }
}