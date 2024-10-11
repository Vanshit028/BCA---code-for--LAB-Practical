#include<stdio.h>
#include<conio.h>

void main(){

int temp, num1, num2;
clrscr();
printf("Enter the First Number");
scanf("%d",&num1);
printf("Enter the Second Number");
scanf("%d",&num2);

printf("Numbers before swapping are %d & %d",num1,num2);

temp = num1;
num1 = num2;
num2 = temp;

printf("Numbers after swapping are %d & %d",num1,num2);

getch();
}