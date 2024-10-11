#include<stdio.h>
#include<conio.h>

void main(){

char str1[100],temp;
int i,j;
clrscr();
printf("Enter the String");
gets(str1);

i=0;
while(str1[i] != '\0'){
    i++;
}
i--;

j=0;
while(j<i){
    temp = str1[j];
    str1[j] = str1[i];
    str1[i] = temp;

    i--;
    j++;
}

printf("Reverce of original string is %s",str1);
getch();
}