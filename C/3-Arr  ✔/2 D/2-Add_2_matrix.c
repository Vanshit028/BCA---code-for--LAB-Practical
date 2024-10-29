// Add 2 2D Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){

int *a,*b, *c, row1, col1, row2, col2, i, j;
clrscr();

printf("first matrix\n");
printf("Enter the order of matrix");
scanf("%d %d",&row1, &col1);
a=(int *)calloc(row1,col1*sizeof(int));

for (i = 0; i < row1; i++){
    for (j = 0; j < col1; j++){
        printf("Enter the number: ");
        scanf("%d",((a+i*col1)+j));
    }
}

printf("second matrix\n");
printf("Enter the order of matrix");
scanf("%d %d",&row2, &col2);
b=(int *)calloc(row2,col2*sizeof(int));

for (i = 0; i < row2; i++){
    for (j = 0; j < col2; j++){
        printf("Enter the number: ");
        scanf("%d",((b+i*col2)+j));
    }
}


if((row1 != row2) || (col1 != col2)){
    printf("For entered matrices order addition is not possible");
    getch();
    exit(0);
}


for (i = 0; i < row2; i++){
    for (j = 0; j < col2; j++){
        *((c+i*col2)+j) = *((a+i*col1)+j) + *((b+i*col2)+j);
    }
}

printf("Added Matrix is\n");
for (i = 0; i < row1; i++){
    for (j = 0; j < col1; j++){
        printf("%d\t", *((c+i*col2)+j));
    }
printf("\n");
}

getch();
free(a);
free(b);
free(c);
}