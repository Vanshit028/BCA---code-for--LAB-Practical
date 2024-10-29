// Read & Print 2D Array
#include<stdio.h>
#include<conio.h>

void main(){

int *a, row, col,i,j;
clrscr();
printf("Enter the order of matrix");
scanf("%d %d",&row, &col);
a=(int *)calloc(row,col*sizeof(int));

for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        printf("Enter the number: ");
	    scanf("%d",((a+i*col)+j));
    }
}

printf("Matrix is\n");
for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
	    printf("%d\t",*((a+i*col)+j));
    }
    printf("\n");
}

getch();
free(a);
}