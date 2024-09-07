// To check whether a letter is vowel or consonants
#include<stdio.h>
#include<conio.h>

void main(){

char letter;
clrscr();
printf("Enter the Letter");
scanf("%c",&letter);

switch(letter){
    case 'a':
    case 'A':printf("%c is a vowel",letter);
    break;

    case 'e':
    case 'E':printf("%c is a vowel",letter);
    break;

    case 'i':
    case 'I':printf("%c is a vowel",letter);
    break;

    case 'o':
    case 'O':printf("%c is a vowel",letter);
    break;

    case 'u':
    case 'U':printf("%c is a vowel",letter);
    break;

    default:printf("%c is a consonants",letter);
    break;
}

getch();
}