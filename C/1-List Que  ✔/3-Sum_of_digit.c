// Sum of digits of a number
#include<stdio.h>
#include<conio.h>

void main(){

int num,sum=0,rem;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
while (num > 0)
{
    rem=num%10;
    sum += rem;
    num /= 10;
}

printf("Sum of digits number is %d",sum);

getch();
}