#include<stdio.h>
#include<conio.h>
void main(){

int arr[100],range,i,j,insert_value;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
printf("Enter the insert value");
scanf("%d",&insert_value);

arr[range] = insert_value;

range++;

printf("Array after insertion/n")
for(i=0;i<range;i++){
    printf("%d ",arr[i]);
}

getch();
}