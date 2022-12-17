#include<stdio.h>
int main(){
    int ts,h,m,s,rs;
    scanf("%d",&ts);
    h=ts/3600;
    rs=(ts%3600);
    m=rs/60;
    s=rs%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
    
}