#include<stdio.h>
#include<math.h>
int main(){
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
    int n,q,s,c=0,a,b,r;
    scanf("%d",&n);
    q=n;
    while(q!=0){
        c++;
        r=q%10;
        q=q/10;
        
    }
    a=n%10;
    b=n/pow(10,(c-1));
    s=a+b;
    printf("%d
",s);
}
    
}