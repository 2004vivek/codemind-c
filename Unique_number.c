#include<stdio.h>
int main(){
    int n,a[100],i,c=0;
    scanf("%d",&n);
    while(n!=0){
        int r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(j!=k){
                if(a[j]==a[k]){
                    c++;
                }
                // else{
                //     break;
                // }
            }
        }
    }
    if(c==0){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}