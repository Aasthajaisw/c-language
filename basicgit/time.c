#include<stdio.h>
int main(){
    float P,R,T,amo;
    scanf("%f%f%f%f",&P,&R,&T,&amo);
    printf("%0.2f",amo*100/P*R);
return 0;}