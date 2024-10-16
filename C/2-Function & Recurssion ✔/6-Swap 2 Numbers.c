// Swap 2 Numbers using call by address
#include<stdio.h>
#include<conio.h>

void swap(int *, int *);

void main(){

int num1, num2;
clrscr();
printf("Enter the First Number");
scanf("%d",&num1);
printf("Enter the Second Number");
scanf("%d",&num2);

printf("Numbers before swapping are %d & %d\n",num1,num2);

swap(&num1, &num2);

printf("Numbers after swapping are %d & %d",num1,num2);

getch();
}

void swap(int *p_num1, int *p_num2){

    int temp = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = temp;

}