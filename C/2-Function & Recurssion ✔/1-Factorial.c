// Factorial of a number using function
#include<stdio.h>
#include<conio.h>

int factorial_cal(int, int);

void main(){

int num; 
long int fact=1;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

while(num != 0){
    
    fact = factorial_cal(num--, fact);
}

printf("Factorial is %d",fact);

getch();
}

int factorial_cal(int num, int fact){
	fact *= num;
	return fact;
}