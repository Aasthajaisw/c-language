#include<stdio.h>
 int main(){
    int a,b,big;

printf("enter value a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
big=(a>b)?a:b;
if(big==a)
{
    printf("%d is greater",a);
}
else{
    printf("%d is greater",b);
}return 0;}