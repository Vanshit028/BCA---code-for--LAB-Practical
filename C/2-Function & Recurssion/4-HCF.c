#include<stdio.h>
#include<conio.h>

void main(){

int num1, num2, HCF, temp;
clrscr();
printf("Enter the First Number");
scanf("%d",&num1);
printf("Enter the Second Number");
scanf("%d",&num2);

while((num1 % num2) == 0){
num1 = num2;
num2 = num1 % num2;
}

HCF = num2;
printf("HCF is %d",HCF);

getch();
}