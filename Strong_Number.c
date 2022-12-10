#include<stdio.h>
int main(){
    int n,q,r;
    scanf("%d",&n);
    q=n;
    int fact,s=0,i;
    while(q!=0)
    {
        fact=1;
        r=q%10;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        s=s+fact;
        q=q/10;
    }
    if(s==n){
        printf("The number %d is a strong number",n);
    }
    else{
        printf("The number %d is not a strong number",n);
    }
}