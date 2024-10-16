// Delete Beginer Element in the Array
#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,j=0;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",&arr[i]);
}

printf("Deleted item is %d\n",arr[0]);

while(j<range){
    arr[j] = arr[j+1];
    j++;
}

range--;

printf("Array after deletion of 1st element\n");

for(i=0;i<range;i++){
    printf("%d ",arr[i]);
}

getch();
}