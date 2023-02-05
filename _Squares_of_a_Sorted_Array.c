#include<stdio.h>
int main(){
    int n,sq[100];
    scanf("%d",&n);
    int a[n],i,temp=0,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sq[i]=a[i]*a[i];
        
    
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(sq[i]>sq[j])
            {
                temp=sq[i];
                sq[i]=sq[j];
                sq[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",sq[i]);
    }
    
          
    
}