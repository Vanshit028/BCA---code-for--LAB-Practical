// Largest Element of each col of a Matrix
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

for (j = 0; j < col; j++)
{
    max=a[0][j];
    max=*(a+j*col);
    printf("Test: %d"\n,max);

    for (i = 0; i < row; i++)
    {
        if(max < *((a+i*col)+j)){
            max = *((a+i*col)+j);
        }
    }
printf("Largest value of column no. %d of matrix is %d\n",j+1,max);
}


getch();
free(a);
}