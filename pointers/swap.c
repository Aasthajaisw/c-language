#include<stdio.h>
void swap(int*,int*);
int main(){
int a,b;
printf("values\n");
scanf("%d%d",&a,&b);
printf("\nbefore swapping");
printf("a=%d and b=%d",a,b);
swap(&a,&b);
printf("\naffter");
printf("a=%d and b=%d",a,b);
return 0;
}
void swap(int *x,int *y)
{
    int temp;

    temp = *x;
     *x = *y;
     *y = temp;   
}