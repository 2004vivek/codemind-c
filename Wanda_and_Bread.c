#include<stdio.h>
int main(){
    int n,m,k,s;
    scanf("%d%d%d",&n,&m,&k);
    s=m*k;
    if(n<=s){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}