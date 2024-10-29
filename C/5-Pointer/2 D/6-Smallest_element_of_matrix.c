// Smallest Element of a Matrix
#include<stdio.h>
#include<conio.h>

void main(){

int *a, row, col,i,j,min;
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

min=*a;
for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        if(min > *((a+i*col)+j)){
            min = *((a+i*col)+j);
        }
    }
}

printf("Minimum value of matrix is %d",min);

getch();
free(a);
}