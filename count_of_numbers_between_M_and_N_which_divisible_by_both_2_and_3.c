#include<stdio.h>
int main(){
    int l,u,c=0,i;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++){
        if(i%2==0 && i%3==0){
            c++;
        }
    }
    printf("%d",c);
}