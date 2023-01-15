#include<stdio.h>
int main(){
float amount,rate,n,A;
printf("enter PA");
scanf("%f",&amount);
printf("enter n");
scanf("%f",&n);
printf("enter rate");
scanf("%f",&rate);
A=amount*(pow((1+rate/100),n));
printf("Compound%f\n",amount);
printf("coumpond interest:%f\n",A-amount);
return 0;}