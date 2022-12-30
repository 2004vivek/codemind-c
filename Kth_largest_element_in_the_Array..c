#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            
        }
        
        }
    }
    printf("%d",a[k-1]);
}