#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int flag=0,i;
    gets(str);
    printf("character");
    scanf("%s",ch);
    for(i=0;i<=strlen(str);i++){
        if(str[i]==ch){
            flag++;
            break;
        }if(flag==0){
            printf("\nsorry");
        }else{
            printf("\n 1st occurrence: %c  at position %d",ch,i+1);
        }}return 0;
    }