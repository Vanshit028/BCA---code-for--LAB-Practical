#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,sum=0,avg;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

for(i=1;i<range;i++){
    sum += arr[i];
}
avg = aum/range;

printf("Average value is %d",avg);

getch();
}