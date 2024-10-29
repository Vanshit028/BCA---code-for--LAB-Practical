/*
A
B       A
C       B       A
D       C       B       A
E       D       C       B       A
F       E       D       C       B       A
*/
#include<stdio.h>
// #include<conio.h>

void main(){

char ch1, ch2;
int row;
// clrscr();
printf("Enter the Numbers of row: ");
scanf("%d",&row);

for (ch1 = 'A'; ch1 <= ('A'+row); ch1++){
    for (ch2 = ch1; ch2 >= 'A'; ch2--){
        printf("%c\t", ch2);
    }
    printf("\n");
}

// getch();
}