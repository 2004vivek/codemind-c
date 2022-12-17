#include<stdio.h>
int main(){
    int l,u,i,j;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d
",i);
        }
    }
}