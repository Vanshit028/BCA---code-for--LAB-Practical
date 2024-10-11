#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){

int a[10][10],b[10][10], c[10][10], row1, col1, row2, col2, i, j;
clrscr();

printf("first matrice\n");
printf("Enter the order of matrice");
scanf("%d %d",&row1, &col1);

for (i = 0; i < row1; i++)
{
for (j = 0; j < col1; j++)
{
    scanf(" %d",&a[i][j]);
}
}

printf("second matrice\n");
printf("Enter the order of matrice");
scanf("%d %d",&row2, &col2);

for (i = 0; i < row2; i++)
{
for (j = 0; j < col2; j++)
{
    scanf(" %d",&b[i][j]);
}
}


if((row1 != row2) || (col1 != col2)){
    printf("For entered matrices order addition is not possible");
    exit(0);
}


for (i = 0; i < row2; i++)
{
for (j = 0; j < col2; j++)
{
    c[i][j] = a[i][j]+b[i][j];
}
}

printf("Added Matrice is\n");
for (i = 0; i < row1; i++)
{
for (j = 0; j < col1; j++)
{
    printf("%d\t",c[i][j]);
}
printf("\n");
}

getch();
}