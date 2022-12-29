#include<stdio.h>
#include<math.h>
int main(){
    int n,k1=1,p=-1,p1=0,i,a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
        a=pow(2,k1);
        printf("%d ",a);
        k1++;
        }
        else if(i%2!=0){
            if(p==-1){
                printf("0 ");
                p+=1;
            }
            else{
                b=pow(3,p1);
                printf("%d ",b);
                p1=p1+1;
            }
        }
            
        }
}