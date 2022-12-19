#include<stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    int c=0,ec=0,oc=0;
    while(n!=0){
        c++;
        r=n%10;
        if(r%2==0){
            ec++;
        }
        else if(r%2!=0){
            oc++;
        }
        n=n/10;
    }
    if(c==ec){
        printf("Even");
    }
    else if(c==oc){
        printf("Odd");
        
    }
    else{
        printf("Mixed");
    }
}