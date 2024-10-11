#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){

char str1[100],str2[100];
int i;
clrscr();
printf("Enter the String");
gets(str1);

strcpy(str2,str1);
strrev(str2);
n=strcmp(srt1,str2);

if(n==0){
printf("%s is a palindrome");
}else{
printf("%s is not a palindrome");    
}
getch();
}