// Largest Element of each row of a Matrix
#include<stdio.h>
#include<conio.h>

void main(){

int a[10][10], row, col,i,j,max;
clrscr();
printf("Enter the order of matrix");
scanf("%d %d",&row, &col);

for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        scanf("%d",&a[i][j]);
    }
}

for (i = 0; i < row; i++){
    max=a[i][0];
    for (j = 0; j < col; j++){
        if(max<a[i][j]){
            max = a[i][j];
        }
    }
printf("Largest value of row no. %d of matrix is %d\n",i+1,max);
}


getch();
}