#include<stdio.h>
// #include<conio.h>

long int factorial_copy(int);

void main(){

int num;
long int f;
// clrscr();
printf("Enter the Number");
scanf("%d",&num);

f = factorial_copy(num);

printf("Factorial is %d", f);

// getch();
}

long int factorial_copy(int num){
    long int factorial;
    if(num == 1){
        return 1;
    }else{
        factorial = num * factorial_copy(--num);
        return factorial;
    }
}