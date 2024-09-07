// Print HCF of 2 numbers
#include<stdio.h>
#include<conio.h>

void main(){

int num1,num2,rem,HCF;
clrscr();
printf("Enter 2 Number");
scanf("%d %d",&num1,&num2);
rem=num1%num2;
while (rem !=0)
{
    num1=num2;
    num2=rem;
    rem=num1%num2;
}

printf("HCF = %d",num2);
getch();
}