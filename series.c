#include<stdio.h>
#include<math.h>
int main(){
    int n,i,p1=-1,y=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%2==0){
            if(p1==-1){
                printf("0 ");
                p1++;
            }
            else{
                a=pow(2,p1);
                printf("%d ",a);
                p1++;
            }
        }
        else{
            b=pow(3,y);
            printf("%d ",b);
            y++;
        }
    }
}