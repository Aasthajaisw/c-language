#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0,i;
    printf("enter string\n");
    scanf("%s",&str);
    for(i=0;str[i];i++){
        if(str[i]==' ' && str[i+1]!=' ')
        count++;}
        printf("number of words=%d",str);
        return 0;
    }