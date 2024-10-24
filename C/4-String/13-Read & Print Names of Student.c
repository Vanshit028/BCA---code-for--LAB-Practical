// Program to read an array of strings
#include<stdio.h>
#include<conio.h>

void main(){

char str[10][100];
int i, n;
clrscr();
printf("How many names ");
scanf("%d",&n);

for (i = 0; i<n; i++){
    fflush(stdin);
    printf("Enter the name: ");
    gets(str[i]);
}

printf("Various names are \n");

for(i=0; i<n; i++){
    printf("%s\n",str[i]);
}

getch();
}