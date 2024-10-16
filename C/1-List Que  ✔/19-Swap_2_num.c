// Swap 2 number
#include<stdio.h>
#include<conio.h>

void main(){

int num1,num2,temp;
clrscr();
printf("Enter 2 Number");
scanf("%d %d",&num1,&num2);

printf("Before Swap\n");
printf("num1 is %d\n",num1);
printf("num2 is %d\n",num2);

temp=num1;
num1=num2;
num2=temp;

printf("After Swap\n");
printf("num1 is %d\n",num1);
printf("num2 is %d\n",num2);
getch();
}