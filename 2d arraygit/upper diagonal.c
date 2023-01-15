#include<stdio.h>
int main(){
int a[10][10],i,j,n,sum=0,b;
printf("enter row");
scanf("%d",&n);
printf("enter colunm");
scanf("%d",&b);
for(i=0;i<n;i++){
	for(j=0;j<b;j++){
		scanf("%d",&a[i][j]);
	}
}for(i=0;i<n;i++){
	for(j=0;j<b;j++){
		if(j>i){
			sum=sum+a[i][j];
		}
	}
}printf("sum of upper triangular matrix=%d",sum);
return 0;}