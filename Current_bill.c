#include<stdio.h>
int main(){
    int unit,c;
    float sc;
    scanf("%d",&unit);
if(unit<200){
    c=unit*1.20;
    sc=c+100;
}
else if(unit>=200 &&unit<400){
    c=unit*1.50;
    sc=c+100;
}
else if(unit>=400 && unit<600){
    c=unit*1.80;
}
else{
    c=unit*2.00;
}
if(unit>=400){
    sc=c+0.15*c;
    printf("%0.2f",sc);
}
else{
    printf("%0.2f",sc);
}
    
}