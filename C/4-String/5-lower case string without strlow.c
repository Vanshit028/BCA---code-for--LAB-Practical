#include<stdio.h>
#include<conio.h>

void main(){

char str1[100],str2[100];
int i;
clrscr();
printf("Enter the String");
gets(str1);

i=0;
while(str1[i] != '\0'){
    if(str1[i]>='A' && str1[i]<='Z'){
    str1[i] =  str1[i]+32;
    }
    i++;
}

printf("Lower case string is %s",str1);
getch();
}