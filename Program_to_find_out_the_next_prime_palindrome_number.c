#include<stdio.h>
int pal(int n);
int prime(int n);
int main(){
  int n,i;
  scanf("%d",&n);
  for(i=n+1;;i++){
      if(pal(i) && prime(i)){
          printf("%d",i);
          break;
      }
  }
}
int pal(int n){
    int q,s=0,r;
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
int prime(int n){
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}