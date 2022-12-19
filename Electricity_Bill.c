#include<stdio.h>
int main(){
    int unit;
    float c,sc,tc;
    scanf("%d",&unit);
    if(unit<200){
        c=unit*1.20;
        tc=c;
        printf("Units Consumed: %d
",unit);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %0.2f
",c);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tc);
    }
    else if(unit>=200 && unit<400)
    {
        c=unit*1.40;
        tc=c;
        printf("Units Consumed: %d
",unit);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %0.2f
",c);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tc);
    }else if(unit>=400 && unit<600)
    {
        c=unit*1.60;
        sc=c*0.15;
        tc=c+sc;
        printf("Units Consumed: %d
",unit);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %0.2f
",c);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tc);
    }else if(unit>=600 && unit<800)
    {
        c=unit*1.80;
        sc=c*0.15;
        tc=c+sc;
        printf("Units Consumed: %d
",unit);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %0.2f
",c);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tc);
    }else{
        c=unit*2.00;
        sc=c*0.15;
        tc=c+sc;
        printf("Units Consumed: %d
",unit);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %0.2f
",c);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tc);
    }
    
}