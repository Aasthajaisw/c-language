#include<stdio.h>
#include<math.h>
int main(){
int n,num,t=0,r;
scanf("%d",&n);
num=n;
int l= log10(n)+1;
while(n!=0)
{
    r=n%10;
    r=n/10;
    t += pow(r,l);
}
if(num==t){
    printf("no is fabbonic");
}else{
    printf("not a no.");
}
return 0;}