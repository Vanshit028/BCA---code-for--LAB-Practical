#include<stdio.h>
// #include<conio.h>

int factorial_cal(int, int);

void main(){

int num; 
long int factorial=1;
// clrscr();
printf("Enter the Number");
scanf("%d",&num);

while(num != 0){
    
    factorial = factorial_cal(num--, factorial);
}

printf("Factorial is %d",factorial);

// getch();
}

int factorial_cal(int num, int factorial){
	factorial *= num;
	return factorial;
}