// Find quadratic roots from cofficent of equation
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){

int num1,num2,num3,root1,root2, discriminant;
clrscr();
printf("Enter the coff of equation");
scanf("%d %d %d",&num1,&num2,&num3);

discriminant = (num2*num2)-(4*num1*num3);

if(discriminant >0){
root1 = (-num2-sqrt(discriminant))/2*num1;
root2 = (-num2+sqrt(discriminant))/2*num1;
printf("Roots of quadratic equation are %d & %d",root1,root2);
}else if(discriminant == 0){
root1 = root2 = (-num2)/2*num1;
printf("Roots of quadratic equation are %d & %d",root1,root2);
}else{
    printf("Real Roots not possible");
}

getch();
}
