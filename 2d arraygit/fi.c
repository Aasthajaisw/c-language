#include<stdio.h>
double cube(double a);
int main(){
    int a;
    double c;
    scanf("%d",&a);
    c=cube(a);

    
    printf("cube of %d is %.2f",a,c);
    return 0;
}double cube(double a){
 return(a*a*a);   
}