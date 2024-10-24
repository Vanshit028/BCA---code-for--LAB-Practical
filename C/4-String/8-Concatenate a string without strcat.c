// Program to concatenate 2 str 
#include<stdio.h>
#include<conio.h>

void main(){

char str1[100],str2[100];
int i,j;
clrscr();
printf("Enter the first String");
gets(str1);
printf("Enter the second String");
gets(str2);

i=0;
while(str1[i] != '\0'){
    i++;
}

j=0;
while (str2[j] != '\0'){
    str1[i] = str2[j];
    i++;
    j++;
}
str1[i] = '\0';

printf("String After concatenation: %s",str1);

getch();
}