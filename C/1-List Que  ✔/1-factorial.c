// Factorial of a number
#include<stdio.h>
#include<conio.h>

void main(){
long int num,i,factorial=1;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
for (i = 1; i <= num ; i++)
{
    factorial *= i;
}
printf("%d",factorial);
getch();
}