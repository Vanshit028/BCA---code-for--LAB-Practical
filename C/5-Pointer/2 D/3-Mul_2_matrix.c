// Mul 2 2D Array
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){

int a[10][10],b[10][10], c[10][10], row1, col1, row2, col2, i, j, k, sum=0;
clrscr();

printf("first matrix\n");
printf("Enter the order of matrix");
scanf("%d %d",&row1, &col1);

for (i = 0; i < row1; i++){
    for (j = 0; j < col1; j++){
        scanf("%d",&a[i][j]);
    }
}

printf("second matrix\n");
printf("Enter the order of matrix");
scanf("%d %d",&row2, &col2);

for (i = 0; i < row2; i++){
    for (j = 0; j < col2; j++){
        scanf("%d",&b[i][j]);
    }
}


if(col1 != row2){
    printf("For entered orders of matrices multiplication is not possible");
    exit(0);
}


for (i = 0; i < row1; i++){
    for (j = 0; j < col2; j++){
        for (k = 0; k < col1; k++){
            sum = sum + (a[i][k]*b[k][j]);
        }
    c[i][j]=sum;
    sum=0;
    }
}

printf("Multipled Matrix is\n");
for (i = 0; i < row1; i++){
    for (j = 0; j < col2; j++){
        printf("%d\t",c[i][j]);
    }
printf("\n");
}

getch();
}