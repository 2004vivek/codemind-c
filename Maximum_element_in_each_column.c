#include<stdio.h>
int main(){
    int r,c,i,j,max;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(j=0;j<c;j++){
         max=0;
        for(i=0;i<r;i++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        printf("%d
",max);
    }
    
}