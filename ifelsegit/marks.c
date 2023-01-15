#include<stdio.h>
int main(){
int a,b,c,h;

printf("maths marks\n");
scanf("%d",&a);

printf("english marks\n");
scanf("%d",&b);

printf("maths marks\n");
scanf("%d",&c);
h=a+b+c;
printf("%d%%",(h/3));
if(h<=100&&h>=90)
printf("A+");
else if(h>=80&&h<=90)
printf("B");
else 
printf("fail");
return 0;}