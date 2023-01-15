#include<stdio.h>
int main(){
 int n,max,min,a[100],i;
printf("enter");
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}for(i=0;i<n;i++){
   if(a[i]%2==0){
      
      printf("even=%d ",a[i]);
   }}

   for(i=0;i<n;i++){
      if(a[i]%2!=0)
      printf("odd=%d",a[i]);
   }return 0;}   