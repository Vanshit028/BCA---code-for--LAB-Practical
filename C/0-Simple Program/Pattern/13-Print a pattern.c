/*
1
1       1
1       1       1
1       1       1       1
1       1       1       1       1
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
        printf("%d\t", 1);
    }
    printf("\n");
}


// getch();
}