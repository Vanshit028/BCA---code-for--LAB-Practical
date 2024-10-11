// Calculator
#include<stdio.h>
#include<conio.h>

void main(){

int num1,num2;
char operator;
clrscr();
// Why 2nd scanf can't be excuted
// scanf("%d %d %c",&num1,&num2,&operator);
printf("Enter 2 Number ");
scanf("%d %d",&num1,&num2);
printf("Enter the operator");
scanf(" %c",&operator);

switch (operator)
{
    case '+':printf("%d + %d = %d",num1,num2,num1+num2);
    break;

    case '-':printf("%d - %d = %d",num1,num2,num1-num2);
    break;

    case '*':printf("%d * %d = %d",num1,num2,num1*num2);
    break;

    case '/':printf("%d / %d = %d",num1,num2,num1/num2);
    break;

    default:printf("You Entered the Wrong Operator");
    break;
}

getch();
}