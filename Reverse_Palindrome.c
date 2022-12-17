#include<stdio.h>
int rev(int n);
int pal(int n);
int main(){
    int n,x;
    scanf("%d",&n);
    n=n+rev(n);
    while(pal(n)==0)
    {
        n=n+rev(n);
    }
    printf("%d",n);
    
    
}
int rev(int n){
    int r,s=0;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int pal(int n)
{

	int r,q,s1=0;
	q=n;
	while(q!=0){
	    r=q%10;
	    s1=s1*10+r;
	    q=q/10;
	}
	if(s1==n){
	    return 1;
	}
	else{
	    return 0;
	}

}