// Program to print the str in lower case
#include<stdio.h>
#include<conio.h>

void main(){

char str[100]
int i;
clrscr();
printf("Enter the String");
gets(str);

i=0;
while(str[i] != '\0'){
    if(str[i]>='A' && str[i]<='Z'){
    str[i] =  str[i]+32;
    }
    i++;
}

printf("Lower case string is %s",str);
getch();
}