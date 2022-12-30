#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        int x,a,y;
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x&&a<y){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
    }
}