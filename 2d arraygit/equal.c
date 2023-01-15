#include<stdio.h>
int main(){


int a[100][100],b[100][100],c[100][100],i,j,n,equal=1;
 printf("enter size");
 scanf("%d",&n);
 printf("enter array in elements in 1 array\n");
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
 }printf("elemnts in araay 2\n");
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
 }printf("first array \n");
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("elements:[%d][%d]",i,i);
        printf("%d\n",a[i][j]);
    }
 }for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=b[i][j]);
    {
        equal=0;
        break;
    }
    }
 }if(equal==1)
 {
    printf("\n matrices are equal");
 }else{
    printf("not equal");
 } return 0;}