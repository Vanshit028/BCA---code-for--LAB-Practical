// Reverse a number
#include<stdio.h>
#include<conio.h>

void main(){

int num,rev=0,rem;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
while (num > 0)
{
    rem=num%10;
    rev=rev*10+rem;
    num /= 10;
}

printf("Reverse of number is %d",rev);
getch();
}