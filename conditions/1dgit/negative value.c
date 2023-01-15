#include<stdio.h>
int main(){
    int a[6],i,b;
scanf("%d",&b);
printf("enter elements in array");
for(i=0;i<b;i++){
    scanf("%d",&a[i]);                                  //  2)
}
  printf("all negative number are");
  for(i=0;i<b;i++){
    if (a[i]<0){
        printf("%d\t",a[i]);
    }
  }return 0;}