#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c,ct=0;
    int i,j,x;
    if(n==1){
        printf("%d",a[0]);
    }
    else{
        for(i=0;i<n;i++){
            c=0;
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    c++;//1 2
                    if(c>=n/2){
                         x=i;
                         ct=1;
                       
                    }
                }
            }
        }
    }
    if(ct==1){
         printf("%d",a[x]);
    }
    else{
       printf("-1");  
    }
       
}