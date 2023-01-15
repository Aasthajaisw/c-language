#include<stdio.h>
int main(){
float days,z ;
printf("enter days");
scanf("%f",&days);
printf("days in year%f\n",days/365);
z=days-365;
printf("days in weeks:%f\n",z/7);
return 0;}