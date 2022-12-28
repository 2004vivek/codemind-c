#include<stdio.h>
int main(){
    long long int a;
    scanf("%lld",&a);
    int x,y,s=0,z,r;
    x=a%1000;
    y=a-x;
    while(x!=0){
        r=x%10;
        s=s*10+r;
        x=x/10;
        
    }
    z=y+s;
    printf("%d",z);
    
    
}