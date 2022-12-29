#include<stdio.h>
int pal(int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        if(pal(a[i])){
            c++;
        }
    }
    if(c==n){
        printf("1");
    }
    else{
        printf("0");
    }
}
int pal(int n){
    int q,r,s=0;
    q=n;
    while(q!=0){
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n){
        return 1;
    }
    else{
        return 0;
    }
}