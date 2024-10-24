// Program to Count char, words, para of a str  (Left)
#include<stdio.h>
#include<conio.h>

void main(){

char str[100];
int i, j, ch_count=0, word_count=0, para_count=0;
clrscr();
printf("Enter the String");
gets(str);

i=0;
while(str[i] != '\0'){
// To count Character
	ch_count++;

// To count words
    if((str[i] == ' ')||(str[i] == '.')||(str[i] == ',')||(str[i] == '!')){
	word_count++;
    }    

// To count paragraph
    if(str[i] == '\n'){
	para_count++;
    }

    i++;
}

printf("Number of charactor: %d", ch_count);
printf("Number of word: %d", word_count);
printf("Number of paragraph: %d", para_count);

getch();
}