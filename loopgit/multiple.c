#include<stdio.h>
int main(){
int a,i,n,b;
    scanf("%d %d",&a,&n);
    
    for(i=1;i<=n;i++){
        
        b=a * i;
        if(b<=n)
        printf("%d  ",b);}
return 0;}