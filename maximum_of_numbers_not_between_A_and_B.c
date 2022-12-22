#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,y,max=-111;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++){
        if(a[i]<x|| a[i]>y){
            if(a[i]>max){
                max=a[i];
                c++;
            }
        }
    }
    if(c==0){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}