// Avg Element in the Array
#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,sum=0,avg;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",&arr[i]);
}

for(i=0;i<range;i++){
    sum += arr[i];
}
avg = sum/range;

printf("Average value is %d",avg);

getch();
}