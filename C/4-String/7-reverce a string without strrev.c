// Program to reverse a str 
#include<stdio.h>
#include<conio.h>

void main(){

char str[100],temp;
int i,j;
clrscr();
printf("Enter the String");
gets(str);

i=0;
while(str[i] != '\0'){
    i++;
}
i--;

j=0;
while(j<i){
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;

    i--;
    j++;
}

printf("Reverce of original string is %s",str);
getch();
}