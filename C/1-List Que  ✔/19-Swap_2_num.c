// Swap 2 number
#include<stdio.h>
#include<conio.h>

void main(){

int num1,num2,swap;
clrscr();
printf("Enter 2 Number");
scanf("%d %d",&num1,&num2);

printf("Before Swap\n");
printf("num1 is %d\n",num1);
printf("num2 is %d\n",num2);

swap=num1;
num1=num2;
num2=swap;

printf("After Swap\n");
printf("num1 is %d\n",num1);
printf("num2 is %d\n",num2);
getch();
}