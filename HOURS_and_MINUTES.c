#include<stdio.h>
int main(){
    int tm,h,m;
    scanf("%d",&tm);
    h=tm/60;
    m=tm%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}