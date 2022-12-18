#include<stdio.h>
int main(){
    int unit,c;
    float sc;
    scanf("%d",&unit);
    if(unit<200){
        c=unit*1.20;
    }else if(unit<400){
        c=unit*1.50;
    }
    else if(unit<600){
        c=unit*1.80;
    }
    else{
        c=unit*2.00;
    }
    if(unit>=400){
        sc=c+0.15*c;
        printf("%.2f",sc);
    }
    else{
        sc=c+100;
        printf("%.2f",sc);
    }
}