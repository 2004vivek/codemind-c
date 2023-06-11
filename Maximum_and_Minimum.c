#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n],c,ct=0,min=99999,max=-11111111,b[10000],x=0,k;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    c=1;
    for(j=i+1;j<n;j++){
        // if(i!=j){
            if(a[i]==a[j]){
                c++;
            }
        // }
    }
    if(c==a[i]){
        ct++;
        b[x]=a[i];
        x++;
    }
}
if(ct==0){
    printf("-1");
}
else{
    for(i=0;i<x;i++){
        if(b[i]>max){
            max=b[i];
        }
    }
    for(i=0;i<x;i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    printf("%d %d",min,max);
}

}