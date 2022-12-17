#include<stdio.h>
int main(){
    int b,da,hra;
    float gs;
    scanf("%d",&b);
    if(b<=10000){
        da=0.8*b;
        hra=0.2*b;
    }
    else if(b<=20000){
        da=0.9*b;
        hra=0.25*b;
    }
    else{
        da=0.95*b;
        hra=0.3*b;
    }
    gs=b+da+hra;
    printf("%0.2f",gs);
    
    
}