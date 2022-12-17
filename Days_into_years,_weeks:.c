#include<stdio.h>
int main(){
    int days,year,week;
    scanf("%d",&days);
    year=days/365;
    week=(days%365)/7;
    printf("%d
",year);
    printf("%d
",week);
}