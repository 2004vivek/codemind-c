#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,t=0,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        }
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    
}