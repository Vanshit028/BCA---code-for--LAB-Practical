#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,j,insert_value;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
printf("Enter the insert value");
scanf("%d",&insert_value);

j=range;
while(j>0){
    arr[j] = arr[j-1];
    j--;
}

arr[0] = insert_value;


range++;

printf("Array after insertion/n")
for(i=0;i<range;i++){
    printf("%d ",arr[i]);
}

getch();
}