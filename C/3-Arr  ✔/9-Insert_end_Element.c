// Insert End Element in the Array
#include<stdio.h>
#include<conio.h>
void main(){

int arr[100],range,i,j,insert_val;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
printf("Enter the insert value");
scanf("%d",&insert_val);


for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",&arr[i]);
}

arr[range] = insert_val;

range++;

printf("Array after insertion\n");
for(i=0;i<range;i++){
    printf("%d ",arr[i]);
}

getch();
}