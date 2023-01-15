#include<stdio.h>
int sumarray(int *,int);
void main(){
    int i,n,sum=0,array[5];
    int *ptr;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }ptr=array;
    for(i=0;i<n;i++){
        sum=sum+ *ptr;
        ptr++;
    }printf("sum of array elements is: %d",sum);
    
}