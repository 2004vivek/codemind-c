#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m,v,z;
    scanf("%d%d%d",&x,&y,&m);
    v=pow(x,y);
    z=v%m;
    printf("%d",z);
}