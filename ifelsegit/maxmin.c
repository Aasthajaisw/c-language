#include<stdio.h>
int main(){
    int i=1,min,n,max,a;
scanf("%d",&n);
while(n>0)
{
    scanf("%d",&a);
    if(i==1)
    {
        min=a;
        max=a;
        a++;
    }
    else if(i>=1)
    {
        if(min>a)
        min=a;
        if(max<a)
        max=a;
    }n--;
}printf("min-%d,max=%d",min,max);
return 0;
}