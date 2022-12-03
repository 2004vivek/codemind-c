#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        int s;
        scanf("%d",&s);
        if(a[i]==s){
        c=1;
    }
    }
    if(c==1){
        printf("True");
    }else{
        printf("False");
    }
}