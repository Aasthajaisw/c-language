#include<stdio.h>
#include<stdlib.h>
int main(){
 int i,j,r,c,n,a[50][50],b[50][50],mul[50][50],k;
system("cls");
 printf("enter value\n");
 scanf("%d %d",&r,&c);
 printf("1st matrix\n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("elements [%d],[%d]",i,j);
        scanf("%d",&a[i][j]);
    }
 }   printf("2nd matrix\n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("elements [%d],[%d]",i,j);
        scanf("%d",&b[i][j]);
    }
 }printf("elements in 1st\n");
 for(i=0;i<r;i++){
    printf("\n");
    for(j=0;j<c;j++)
    printf("%d  ",a[i][j]);
 } 
 printf("\n2nd elements\n");
 for(i=0;i<r;i++){
    printf("\n");
    for(j=0;j<c;j++)
    printf("%d  ",b[i][j]);
 }printf("multi\n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        mul[i][j]=0;
        for(k=0;k<c;k++){
            mul[i][j]=a[i][k]*b[k][j];
        }
    }
 }for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",mul[i][j]);
    }printf("\n");
 }return 0;
}