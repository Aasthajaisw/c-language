#include<stdio.h>
 int main(){

int y, number;
printf("enter number 1-100");
scanf("%d",&number);
if((number>1) && (number<100))
{
    printf("number is in the range ");
}
else{
    printf("out of the range");
}

printf("enter a year:");
scanf("%d",&y);
if((y%4==0 && y%100!=0)|| y%400==0)
printf("the above given year IS a leap year");
else {
printf("the above given year IS not a leap year");
}return 0;}