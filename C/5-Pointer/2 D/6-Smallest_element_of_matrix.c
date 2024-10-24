// Smallest Element of a Matrix
#include<stdio.h>
#include<conio.h>

void main(){

int a[10][10], row, col,i,j,min;
clrscr();
printf("Enter the order of matrix");
scanf("%d %d",&row, &col);

for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        scanf("%d",&a[i][j]);
    }
}

min=a[0][0];
for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        if(min>a[i][j]){
            min = a[i][j];
        }
    }
}

printf("Minimum value of matrix is %d",min);

getch();
}