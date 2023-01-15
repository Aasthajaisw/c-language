#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,index=-1;
    printf("enter string");
    gets(str);
    printf("\ncharacter");
    scanf("%c",&ch);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==ch){
            index=i;}
        }if(index==-1){
            printf("\nsorry: %c",ch);
        }else{
            printf("\n last %c at position %d",ch,index+1);
        } return 0;}
    