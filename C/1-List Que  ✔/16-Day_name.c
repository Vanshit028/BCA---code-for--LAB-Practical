// Find day name by day number
#include<stdio.h>
#include<conio.h>

void main(){

int day_num;
clrscr();
printf("Enter the Day Number from 1 to 7");
scanf("%d",&day_num);

switch(day_num){
    case 1:printf("Monday");
    break;
    
    case 2:printf("Tuesday");
    break;
    
    case 3:printf("Wednesday");
    break;

    case 4:printf("Thursday");
    break;
    
    case 5:printf("Friday");
    break;
    
    case 6:printf("Saturday");
    break;

    case 7:printf("Sunday");
    break;

    default:printf("You Entered the Wrong Day Number");
    break;
}

getch();
}