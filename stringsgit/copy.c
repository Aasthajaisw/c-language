#include<stdio.h>
#include<string.h>
int main(){
    char a[]="gla uni";
    char b[100];
    strcpy(b,a);
    printf("%s",b);
    return 0;
}