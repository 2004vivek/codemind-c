#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp=0;
    float s=0.0,avg;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(i=0;i<n;i++){
        if(i>=1&&i<=(n-2)){
            s=s+a[i];
        }
        
    }
    avg=s/(n-2.0);
    printf("%0.5f",avg);
    
}