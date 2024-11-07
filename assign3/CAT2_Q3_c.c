/*A programto calculate the taxes
Author:Genesis Otieno
Date:7/11/2024*/
#include <stdio.h>
int main ( ) {
float hours,wage,gross_pay,taxes,net_pay;
printf( "Enter the hours worked in a week :");
scanf( "%f",&hours);
printf( "Enter the hourly wage:");
scanf( "%f",&wage);
//calculate gross pay ,considering overtime
if ( hours <= 40){
    gross_pay=hours*wage;
} else {
    gross_pay = ( 40*wage)+( hours - 40) * wage *1.5;
}
//Calculate taxes based on the tax brackets
if ( gross_pay <= 600) {
    taxes = gross_pay * 0.15;
}else {
    taxes = 600 *0.15 + ( gross_pay - 600) * 0.20;
}
//calculate net pay
net_pay =gross_pay - taxes;
printf( " \nGross pay:$%.2f\n",gross_pay);
printf( "Taxes : $%.2f\n",taxes);
printf( " Net pay:$%.2f\n" ,net_pay);
return 0;
}
 S