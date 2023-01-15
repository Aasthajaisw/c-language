#include<stdio.h>
int main(){
//     int m,n,i,j,a[50][50],b[50][50],c[50][50];
//     printf("enter order");
//     scanf("%d",&n);
//     printf("enter elements in 1st array\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("elements-[%d],[%d]=",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter elements of 2nd elements;");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("elements-[%d],[%d]=",i,j);
//             scanf("%d",&b[i][j]);
//         }
//     } printf("\nThe First matrix is :\n");
//   for(i=0;i<n;i++)
//     {
//       printf("\n");
//       for(j=0;j<n;j++)
//            printf("%d\t",a[i][j]);
//     }
  
//   printf("\nThe Second matrix is :\n");
//   for(i=0;i<n;i++)
//     {
//       printf("\n");
//       for(j=0;j<n;j++)
//       printf("%d\t",b[i][j]);
//     }
//     printf("sum calculate\n");
//     for(i=0;i<n;i++)
//         for(j=0;j<n;j++)
    
//     c[i][j]=a[i][j]+b[i][j];
//     printf("addition\n");
//     for(i=0;i<n;i++){
//         printf("\n");
//         for(j=0;j<n;j++)
//         printf("%d ",c[i][j]);
//     } printf("\n\n");


int i,j,m,n,a[50][50],b[50][50],c[50][50];
printf("enter order");
scanf("%d",&n);
printf("enter elements in 1st array\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("elements[%d],[%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
}printf("enter elements of 2nd array\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("elements-[%d],[%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
}printf("first matrix is\n");
   for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d   ",a[i][j]);
   }
   printf("2nd matrix\n");
   for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d  ",b[i][j]);
   }printf("\n sum calculate\n");
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   c[i][j]=a[i][j]+b[i][j];
   printf("\n addition\n");
   for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d",c[i][j]);
   }printf("\n\n");
    return 0;
}