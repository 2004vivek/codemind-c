#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        int sp,cp;
        scanf("%d%d",&sp,&cp);
        if(sp>cp){
            printf("LOSS
");
        }
        else if(sp==cp){
            printf("NEUTRAL
");
        }
        else{
            printf("PROFIT
");
        }
    }
}