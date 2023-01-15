#include<stdio.h>
int main(){
    int size,arr[10],sum=0,i;
    scanf("%d",&size);
    printf("elements are\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    sum=sum+arr[i];
    printf("sum=%d",sum);
    return 0;}
