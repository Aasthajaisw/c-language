#include<stdio.h>
int main(){
    // int a[10],b[10],c[10],n,m,i,j;
    // printf("enter value");
    // scanf("%d",&m);
    // printf("enter element of 1st array");
    // for(i=0;i<m;i++){
    //     scanf("%d",&a[i]);
    // }printf("enter value of 2nd aray");
    // scanf("%d",&n);
    // printf("enter elements of 2nd");
    // for(i=0;i<n;i++){
    //     scanf("%d",&b[i]);
    // }for(i=0;i<m;i++)
    // c[i]=a[i];
    // j=i;
    // for(i=0;i<n;i++,j++)
    // c[j]=b[i];
    // printf("after merge\n");
    // for(i=0;i<m+n;i++)
    // printf("%d ",c[i]);



    int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
  
       printf("Addition of two Matrices :\n");
       printf("------------------------------\n");  
        printf("Input the size of the square matrix (less than 5): ");
       scanf("%d", &n); 
  
    /* Stored values into the array*/
       printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
  
       printf("Input elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }    
   printf("\nThe First matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
    }
  
  printf("\nThe Second matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",brr1[i][j]);
    }
/* calculate the sum of the matrix */   
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            crr1[i][j]=arr1[i][j]+brr1[i][j];
   printf("\nThe Addition of two matrix is : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",crr1[i][j]);
   }
   printf("\n\n");
    return 0;
}