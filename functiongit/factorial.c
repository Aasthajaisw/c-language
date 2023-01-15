#include<stdio.h>
int fact(int);
void main(){
    int n;
    scanf("%d",&n);
    int k=fact(n);
    printf("%d",k);
}int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f=f*i;
    }return (f);
}