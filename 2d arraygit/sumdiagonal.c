#include<stdio.h>
int main(){
    
int a[100][100],i,m,j,n,sum=0,b=0;
printf("enter value");
scanf("%d %d",&n,&m);
if(n==m){
	printf("enter co-efficient of matrix \n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}
printf("given matrix\n" );
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",a[i][j]);
	}printf("\n");}
	for(i=0;i<n;i++){
	sum=sum+a[i][j];
	b=b+a[i][m-i-1];
	}printf("\n sum of diagonal elements:%d\n",sum);
printf("sum off element  %d\n",b);}
else
printf("wrong matrix");
return 0;}