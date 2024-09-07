// Check whether a number is prime or not
#include<stdio.h>
#include<conio.h>

void main(){

int num,count=0,i;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

for (i = 2; i < num; i++)
{
    if(num%i==0){
        count++;
        break;        
   }
}

if(count==0){
    printf("%d is a prime number",num);
}else{
    printf("%d is not a prime number",num);
}
getch();
}