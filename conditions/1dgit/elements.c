#include<stdio.h>
int main(){
    int a[5],c,e;

printf("enter number in array\n");
scanf("%d",&e);
printf("enter %d numbers\n",e);
   for(c=0;c<e;c++){
                                                    
    scanf("%d",&a[c]);
   }
   printf("elemnts in an array");
   for(c=0;c<e;c++)
   {printf("%d ",a[c]);}
   return 0;
}