#include<stdio.h>
// #include<conio.h>

void HCF_cal(int *,int *);

void main(){

int num1, num2, HCF, rem;
// clrscr();
printf("Enter the First Number");
scanf("%d",&num1);
printf("Enter the Second Number");
scanf("%d",&num2);

int *p_num1 = &num1;
int *p_num2 = &num2;

HCF_cal(p_num1,p_num2);

HCF = num2;
printf("HCF is %d",HCF);

// getch();
}

void HCF_cal(int *p_num1,int *p_num2){
    int rem;
    int num1 = *p_num1, num2 = *p_num2;
    rem = num1 % num2;

    while(rem != 0){
        *p_num1 = *p_num2;
        *p_num2 = rem;
        rem = num1 % num2;
    }
    
}