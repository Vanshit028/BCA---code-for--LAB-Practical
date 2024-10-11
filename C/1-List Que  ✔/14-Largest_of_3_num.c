// To find largest of 3 numbers
#include<stdio.h>
#include<conio.h>

void main(){

int num1,num2,num3;
clrscr();
printf("Enter 3 Number");
scanf("%d %d %d",&num1,&num2,&num3);

if(num1>num2){
    if (num1>num3)
    {
       printf("%d is the largest nummber",num1);
    }else
    {
       printf("%d is the largest nummber",num3);
    }
}else{
    if (num2>num3)
    {
       printf("%d is the largest nummber",num2);
    }else
    {
       printf("%d is the largest nummber",num3);
    }
}
getch();
}