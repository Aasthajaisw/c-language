#include<stdio.h>
void str(char[]);
int main(){
char sentence[]="hello gla";
str(sentence);
return 0;
}
void str(char str[]){
    printf("string: %s\n",str);
}
