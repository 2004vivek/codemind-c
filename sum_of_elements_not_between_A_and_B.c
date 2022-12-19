#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y){
            s=s+a[i];
        }
    }
    printf("%d",s);
    
}