#include<stdio.h>
 int main(){
   int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n],ele,i,k,f=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter search elements");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if (a[i]==ele){
            f=1;
            k=i+1;
            break;
        }
    }if(f==1)
    printf("element found at location %d",k);
    else
    printf("not found");
return 0;}