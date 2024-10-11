#include<stdio.h>
#include<conio.h>

void main(){

int a[10][10], row, col,i,j,max;
clrscr();
printf("Enter the order of matrix");
scanf("%d %d",&row, &col);

for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
    scanf("%d",&a[i][j]);
}
}

for (j = 0; j < col; j++)
{
    max=a[0][1];
for (i = 0; i < row; i++)
{
    if(max<a[i][j]){
        max = a[i][j];
    }
}
printf("Largest value of column no. %d of matrix is %d\n",j+1,max);
}


getch();
}