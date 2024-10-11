#include<stdio.h>
#include<conio.h>

void main(){

int num;
clrscr();
printf("Enter the Number");
scanf("%d",&num);
printf("Entered number is %d",num);

while(num == 0){
    printf("Enter the Number");
    scanf("%d",&num);
    printf("Entered number is %d",num);
}

getch();
}