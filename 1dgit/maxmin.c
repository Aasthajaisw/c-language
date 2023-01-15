#include<stdio.h>
int main(){
    int n,a[100],i,max,min;
printf("enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++){
if(a[i]>max){
   max=a[i];
}if(a[i]<min){
   min=a[i];
}
}printf("max=%d\n",max);
printf("min=%d\n",min);
return 0;}