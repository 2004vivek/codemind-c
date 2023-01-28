#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,c=0;
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]>x){
            c=c+2;
        }
        else{
          c=c+1;  
        }
    }
    printf("%d",c);
}