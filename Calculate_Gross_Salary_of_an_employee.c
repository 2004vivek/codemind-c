#include<stdio.h>
int main(){
    float b,hra,da,pf,gs;
    scanf("%f%f%f",&b,&hra,&da);
    pf=0.12*b;
    printf("%0.2f
",pf);
    gs=b+hra+da+pf;
    printf("%0.2f
",gs);
}