#include<stdio.h>
int main(){
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(x+y==w||y+z==w||z+x==w||w==z||x==w||y==w){
        printf("YES");
    }
    else{
        printf("NO");
    }
}