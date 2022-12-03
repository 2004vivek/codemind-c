#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x[n],i,s=0,sum=0,diff;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            s=s+x[i];
        }
    }
    for(i=0;i<n;i++){
        if(i%2!=0){
            sum=sum+x[i];
        }
    }
    diff=abs(s-sum);
    printf("%d",diff);
}