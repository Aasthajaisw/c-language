#include<stdio.h>
#include<string.h>
int main(){
int alphabet=0,digit=0,sc=0,i;
char str[100];
printf("enter string");
gets(str);
for(i=0;str[i];i++){
    if((str[i]>=65 && str[i]<90)||(str[i]>=97 && str[i]<122))
    alphabet++;
    else if(
        str[i]>=48 && str[i]<=57
    ) digit++;
    else
    sc++;
    }
printf("aplha:%d\n",alphabet);
printf("digit=%d\n",digit);
printf("sc= %d\n",sc);
return 0;}