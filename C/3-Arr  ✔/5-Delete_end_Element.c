#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,j,delete_position;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

printf("Deleted item is %d",arr[range-1]);

printf("Array after deletion/n")
for(i=0;i < (range-1);i++){
    printf("%d ",arr[i]);
}

getch();
}