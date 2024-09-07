// Check whether a number is Armstrong
#include<stdio.h>
#include<conio.h>

void main(){

int num,sum=0,rem,num_copy;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
num_copy=num;
while (num > 0)
{
    rem=num%10;
    sum += (rem*rem*rem);
    num /= 10;
}

if(num_copy==sum){
    printf("%d is a armstrong",num_copy);
}else{
    printf("%d is not a armstrong",num_copy);
}
getch();
}