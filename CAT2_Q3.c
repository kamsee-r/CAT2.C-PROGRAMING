// Q3
/*
Author: Chris Munene Murithi
Reg: CT101/G/21909/24
*/

#include<stdio.h>
int main()
{
    float hoursworked, hourlywage, grosspay, overtimepay=0, taxes, netpay;
    float taxrate1=0.15, taxrate2=0.20;
    float firsttax=600.0;
    
    printf("enters the hours worked in a week:");
    scanf("%f",&hoursworked);
    
    printf("enter the hourly wage:");
    scanf("%f",&hourlywage);
    
    if(hoursworked > 40) {
      
        grosspay =(40 * hourlywage) + (hoursworked - 40) * hourlywage * 1.5;
    }
    else {
        grosspay = hoursworked * hourlywage;
    }
    
    
    if (grosspay <= firsttax){
        taxes = grosspay * taxrate1;
    }
    else {
        taxes = firsttax * taxrate1 + (grosspay - firsttax) * taxrate2;
    }
    
    netpay = grosspay - taxes;
    
    printf("\ngross pay:$%.2f\n", grosspay);
    printf("taxes:$%.2f\n", taxes);
    printf("net pay:$%.2f\n", netpay);
    
    return 0;
}