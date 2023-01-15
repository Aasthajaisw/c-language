#include<stdio.h>
int main(){
    int i,space,n,k;
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)
{
    for(space=0;space<=n-i;space++)
    {
        printf("  ");
    }
    for(k=1;k<=(2*i-1);k++)
    {
        printf("*");
    }
    printf("\n");
}return 0;}