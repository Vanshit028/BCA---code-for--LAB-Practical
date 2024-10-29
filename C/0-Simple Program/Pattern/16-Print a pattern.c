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
int row,i;
// clrscr();
printf("Enter the Numbers of row: ");
scanf("%d",&row);

for (i = 0; i < row; i++){
    for (ch='A'; ch <= ('A'+i); ch++){
        printf("%c\t", ch);
    }
    printf("\n");
}


// getch();
}