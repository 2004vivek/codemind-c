#include<stdio.h>
#include<math.h>
int main(){
    int n,k,x,y,b;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    b=abs(n-k);
    if(b*x<b*y){
        printf("%d",k*x+b*x);
    }
    else{
        printf("%d",k*x+b*y);
    }
    
}