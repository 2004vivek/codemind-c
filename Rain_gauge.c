#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        int n;
        scanf("%d",&n);
        if(n<3){
            printf("light
");
        }
        else if(n>=3&& n<=7){
            printf("moderate");
            
        }
        else{
            printf("heavy");
        }
    }
}