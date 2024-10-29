// Trace of a matrix
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){

int *a, row, col,i,j,trace=0;
clrscr();
printf("Enter the order of matrix");
scanf("%d %d",&row, &col);
a=(int *)calloc(row,col*sizeof(int));



if(row != col){
printf("Trace exist for square matrix only");
exit(0);
}

for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        printf("Enter the number: ");
	    scanf("%d",((a+i*col)+j));
    }
}

for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        if(i==j){
            trace += *((a+i*col)+j);
        }
    }
}

printf("Trace of Matrix is %d",trace);


getch();
free(a);
}