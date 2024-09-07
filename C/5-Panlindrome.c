// Check whether a number is panlindrome
#include<stdio.h>
#include<conio.h>

void main(){

int num,rev=0,rem,num_copy;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
num_copy=num;
while (num > 0)
{
    rem=num%10;
    rev=rev*10+rem;
    num /= 10;
}

if(num_copy==rev){
    printf("%d is a palindrome",num_copy);
}else{
    printf("%d is not a palindrome",num_copy);
}

getch();
}