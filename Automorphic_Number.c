#include<stdio.h>
#include<math.h>
int main(){
    int n,sq,r1,r2,rev=0,s=0,r,q;
    scanf("%d",&n);
    int c=0;
    q=n;
    sq=n*n;
    while(n!=0){
        c++;
        r=n%10;
        n=n/10;
    }while(sq!=0 && c!=0){
        r1=sq%10;
        rev=rev*10+r1;
        sq=sq/10;
        c--;
    }while(rev!=0){
        r2=rev%10;
        s=s*10+r2;
        rev=rev/10;
    }if(s==q){
        printf("Automorphic Number");
    }else{
        printf("Not an Automorphic Number");
    }
}