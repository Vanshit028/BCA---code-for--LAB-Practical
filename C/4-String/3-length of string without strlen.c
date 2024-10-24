// Program to print the length of str
#include<stdio.h>
#include<conio.h>

void main(){

char str1[100];
int length;
clrscr();
printf("Enter the String");
gets(str1);

length=0;
while (str1[length] != '\0')
{
    length++;
}

printf("Length of string is %d",length);
getch();
}