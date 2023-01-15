#include<stdio.h>
#include<string.h>
int main(){
    char c[]="world";
    char a[]="gla";
    strcat(c,a);
    printf("%s",c);
    return 0;
}