// Program to Count vowels of a str 
#include<stdio.h>
#include<conio.h>

void main(){

char str[100];
int i, vowel_count=0;
clrscr();
printf("Enter the String");
gets(str);

i=0;
while (str[i] != '\0'){
    if((str[i] == 'a')||(str[i] == 'e')||(str[i] == 'i')||(str[i] == 'o')||(str[i] == 'u')){
	vowel_count++;
    }

    if((str[i] == 'A')||(str[i] == 'E')||(str[i] == 'I')||(str[i] == 'O')||(str[i] == 'U')){
	vowel_count++;
    }
    i++;
}

printf("Number of vowels: %d", vowel_count);

getch();
}