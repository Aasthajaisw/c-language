#include<stdio.h>
int main(){
    int n,i,j,a[50][50],b[50][50],c[50][50];
    printf("enter value");
    scanf("%d",&n);
    printf("1st matrix elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("elements-[%d],[%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("2nd matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {
            printf("%d elements-[%d],[%d]",i,j);
            scanf("%d  ",&b[i][j]);
            }
    }printf("elements are of 1st:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("%d  ",a[i][j]);
    }
    printf("\nelements are of 2nd:\n");
    for(i=0;i<n;i++)
    {
         printf("\n");
        for(j=0;j<n;j++)
        printf("%d ",b[i][j]);
    }
    printf("subtraction\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    c[i][j]=a[i][j]-b[i][j];
    {
    printf("\n sub\n");
    for(i=0;i<n;i++){
     printf("\n");
    for(j=0;j<n;j++)
    printf("%d",c[i][j]);
    }
    printf("\n\n");
}}