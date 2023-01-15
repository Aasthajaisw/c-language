#include<stdio.h>
int main(){
     double P,R,Y,x;
    scanf("%lf",&P);
    scanf("%lf",&R);
    Y=pow(1+(R/100),2);
    x=P*Y;
    printf("%0.2lf",x-P);;
    return 0;}