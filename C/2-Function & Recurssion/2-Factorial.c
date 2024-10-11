#include<stdio.h>
#include<conio.h>

void main(){

int num, factorial=1;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

while(num != 0){
    factorial *= num;
    num--;
}

printf("Factorial is %d",factorial);

getch();
}