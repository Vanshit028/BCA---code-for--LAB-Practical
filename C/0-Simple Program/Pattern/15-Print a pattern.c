/*
A
A       B
A       B       C
A       B       C       D
A       B       C       D       E
*/
#include<stdio.h>
// #include<conio.h>

void main(){

char ch;
int row,i,j;
// clrscr();
printf("Enter the Numbers of row: ");
scanf("%d",&row);

for (i = 1; i <= row; i++){
    ch = 'A';
    for (j = 1; j <= i; j++){
        printf("%c\t", ch);
        ch++;
    }
    printf("\n");
}


// getch();
}