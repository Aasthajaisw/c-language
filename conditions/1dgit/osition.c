#include<stdio.h>
int main(){
    int a[100],i,n,pos;
    printf("enter size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
    }printf("define position");
    scanf("%d",&pos);                                    
    if(pos>=n+1)
    {
        printf("deletion possible");
    }else{
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }printf("resultant array\n");
    for(i=0;i<n-1;i++){
        printf("a[%d]= ",i);
        printf("%d\n",a[i]);
    }}return 0;}