#include<stdio.h>
void main(){
    int a,n,m,i;
     
    printf("enter the number m and n :");
 scanf("%d%d",&m,&n);

if(m>n)

{   a=m;
	for(i=1;i<=n;i++)
	a++;

   printf("%d",a);
}
else
{
	a=n;
	for(i=1;i<=m;i++)
	{
		a++;
	}printf("%d",a);
}return 0;}