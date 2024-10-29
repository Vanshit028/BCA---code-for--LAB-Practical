/*
1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
*/
#include<stdio.h>
// #include<conio.h>

void main(){


int row,i,j;
// clrscr();
printf("Enter the Numbers of row: ");
scanf("%d",&row);

for (i = 1; i <= row; i++){
    for (j = 1; j <= i; j++){
        printf("%d\t", i);
    }
    printf("\n");
}


// getch();
}