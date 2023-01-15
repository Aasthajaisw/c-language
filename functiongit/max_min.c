#include<stdio.h>
int max_min(int,int);
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a>b){
    printf("%d is max and %d is min",a,b);
}else
printf("%d is max and %d is min",b,a);
return 0;
}int max_min(int,int);