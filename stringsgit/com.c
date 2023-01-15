#include<stdio.h>
#include<string.h>
int main(){
    char a[]="hello";
    char b[]="kaif";
    int k;
    strcmp(a,b);
    if((k=strcmp(a,b))==0)
    printf("equal");
    else if (k>0)
    printf("a greater");
    else
    printf("b greater");
    return 0;
}