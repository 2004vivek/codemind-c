#include<stdio.h>
#include<math.h>
int main(){
    int n,q,r,s=0,r1,p;
    scanf("%d",&n);
    int c=0;
    q=n;
    p=q;
    while(n!=0){
        c++;
        r=n%10;
        n=n/10;
        
    }
    while(q!=0&&c!=0){
        r1=q%10;
        s=s+pow(r1,c);
        q=q/10;
        c--;
    }
    if(s==p){
        printf("True");
    }
    else{
        printf("False");
    }
    
}