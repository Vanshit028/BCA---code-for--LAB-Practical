#include<stdio.h>
#include<conio.h>

void main(){

int a[10][10], row, col,i;
clrscr();
printf("Enter the order of matrice");
scanf("%d %d",&row, &col);

for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
    scanf("%d",&a[i][j]);
}
}

printf("Matrice is\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
    printf("%d\t",a[i][j]);
}
printf("\n");

}

getch();
}