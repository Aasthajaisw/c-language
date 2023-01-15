#include <stdio.h>

int main(){
int i;
for(i=10;i;i--)
printf("%d",i);
for(i<4;i=5;i=0)
printf("%d",i);
for(i=1;i<=10;
printf("%d",i++))
;
for(scanf("%d",&i);i<=10;i++)
printf("%d",i);
return 0;}