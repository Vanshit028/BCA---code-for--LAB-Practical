// Program to make a copy of a str 
#include<stdio.h>
#include<conio.h>

void main(){

char str1[100],str2[100];
int i,j;
clrscr();
printf("Enter the String");
gets(str1);

i=0;
while(str1[i] != '\0'){
    i++;
}

j=0;
while(j<i){
    str2[j] = str1[j];
    j++;
}
str2[j]='\0';


printf("copy of original string is %s",str2);
getch();
}