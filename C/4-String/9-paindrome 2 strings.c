// Program to check whethere 2 str are palindrome
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){

char str1[100],str2[100];
int i,  n;
clrscr();
printf("Enter the String ");
gets(str1);

strcpy(str2, str1);
strrev(str2);
n=strcmp(str1, str2);

if(n==0){
printf("%s is a palindrome", str1);
}else{
printf("%s is not a palindrome", str1);
}
getch();
}