// Largest Element of each row of a Matrix
#include<stdio.h>
#include<conio.h>

void main(){

int *a, row, col,i,j,max;
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

for (i = 0; i < row; i++){
    max = *(a+i*col);
    printf("Test: %d"\n,max);
    for (j = 0; j < col; j++){
        if(max < *((a+i*col)+j)){
            max = *((a+i*col)+j);
        }
    }
printf("Largest value of row no. %d of matrix is %d\n",i+1,max);
}


getch();
free(a);
}