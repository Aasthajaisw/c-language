#include<stdio.h>
int main(){
    int a[50],i,j,k,count=0,d[50],n;
printf("enter elements");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]);
    d[i]=-1;
}
printf("entered elements\n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            for(k=j;k<n;k++){
                a[k]=a[k+1];
            }j--;
            n--;
        }
    }

}printf("\nafter deleting the duplicate\n");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;}