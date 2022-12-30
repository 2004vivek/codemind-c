#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    int d,l,r;
    scanf("%d%d%d",&d,&l,&r);
    if(d<l ){
        printf("Too Early
");
    }
    else if(d>=l&&d<=r){
        printf("Take second dose now
");
        
    }
    else{
        printf("Too Late
");
    }
    }
}