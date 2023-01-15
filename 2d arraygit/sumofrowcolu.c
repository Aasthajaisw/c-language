#include<stdio.h>
int main(){
int i,j,a[100][100],r=0,c=0,sum=0;
printf("order of matrix\nu" );
scanf("%d",&r);
scanf("%d",&c);
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		scanf("%d",&a[i][j]);
	}
}for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		sum=sum+a[i][j];
	}printf("sum of rows %d=%d\n",i,sum);
}for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		sum=sum+a[i][j];
	}printf("sum of column %d=%d\n",j,sum);
}
return 0;}