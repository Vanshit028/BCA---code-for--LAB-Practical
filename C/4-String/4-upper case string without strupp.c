// Program to print the str in upper case
#include<stdio.h>
#include<conio.h>

void main(){

char str1[100];
int i;
clrscr();
printf("Enter the String");
gets(str1);

i=0;
while(str1[i] != '\0'){
    if(str1[i]>='a' && str1[i]<='z'){
    str1[i] =  str1[i]-32;
    }
    i++;
}

printf("Upper case string is %s",str1);
getch();
}