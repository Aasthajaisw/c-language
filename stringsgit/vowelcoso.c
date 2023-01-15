#include<stdio.h>
#include<string.h>
int main(){
    int i,str[100],vowel=0,consonants=0;
    char ch;
   printf("enter string");
   gets(str);
   for(i=0;str[i]!='\0';i++){
    ch=str[i];
    if(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='I' || ch=='i' || ch=='o' || ch=='O'
    || ch =='u' || ch=='U')
    vowel++;
    else if (ch== ' ')
    continue;
    else
    consonants++;
   } printf("\n vowels= %d",vowel);
   printf("consonants=%d",consonants);
return 0;}
