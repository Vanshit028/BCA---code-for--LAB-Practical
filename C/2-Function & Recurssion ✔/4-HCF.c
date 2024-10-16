// HCF of 2 numbers using function
#include<stdio.h>
#include<conio.h>

int HCF_cal(int, int);

void main(){

int num1, num2, HCF;
clrscr();
printf("Enter the First Number");
scanf("%d",&num1);
printf("Enter the Second Number");
scanf("%d",&num2);

HCF = HCF_cal(num1,num2);;
printf("HCF is %d",HCF);

getch();
}

int HCF_cal(int num1,int num2){
    int rem;
    rem = num1 % num2;

    while(rem != 0){
	num1 = num2;
	num2 = rem;
	rem = num1 % num2;
    }

    return num2;
}