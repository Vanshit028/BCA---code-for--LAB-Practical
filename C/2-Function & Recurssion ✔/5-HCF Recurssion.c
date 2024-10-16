// HCF of 2 numbers using Recurssion
#include <stdio.h>
#include<conio.h>

// Recursive function to calculate HCF using the Euclidean algorithm
int HCF_cal(int, int);
int rem;
void main() {
    int num1, num2, HCF;
    clrscr();
    // Input two numbers
    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    // Calculate HCF using recursion
    HCF = HCF_cal(num1, num2);

    // Print the HCF
    printf("HCF is %d\n", HCF);

getch();
}

// Recursive function to calculate HCF using the Euclidean algorithm
int HCF_cal(int num1, int num2) {
    rem = num1 % num2;

    if (rem == 0) {
	    return num2;
    }else{
	    num1 = num2;
	    num2 = rem;
	    // Recursive case: Call HCF_cal with (num2, num1 % num2)
	    return HCF_cal(num1, num2);
    }
}
