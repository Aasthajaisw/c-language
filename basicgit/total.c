#include<stdio.h>
int main(){
int m,h,s,sst,e,x;
printf("marks:");
scanf("%d%d%d%d%d",&h,&e,&s,&sst,&m);
x=e+m+s+h+sst;
printf("total marks%d\n",x);
printf("avg%d\n",x/5);
printf("percentage%d\n",(x/250)*100);
return 0;}