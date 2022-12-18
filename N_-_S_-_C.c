#include<stdio.h>
int main(){
    int a,b,i,s,sq,c;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++){
        s=i;
        sq=i*i;
        c=i*i*i;
        printf("%d %d %d
",s,sq,c);
    }
    
}