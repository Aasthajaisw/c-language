#include<stdio.h>
int main(){
   
int n;
printf("enter n");
scanf("%d",&n);
int a[n],temp,i,j;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
    for(j=0;n-1-i;j++){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}printf("after sortng\n");
for(i=0;i<n;i++)
printf("%d",a[j]);
return 0;} 