#include <stdio.h>
#include<conio.h>

// Recursive function to calculate HCF using the Euclidean algorithm
int HCF_cal(int num1, int num2) {
    // Base case: If the second number is 0, return the first number as HCF
    if (num2 == 0) {
        return num1;
    }
    // Recursive case: Call HCF_cal with (num2, num1 % num2)
    return HCF_cal(num2, num1 % num2);
}

int main() {
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
