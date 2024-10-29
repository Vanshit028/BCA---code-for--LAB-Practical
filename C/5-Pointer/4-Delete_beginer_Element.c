// Delete Beginer Element in the Dynamic Array
#include<stdio.h>
#include<conio.h>

void main(){

int *arr,range,i,j=0;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",(arr+i));
}

printf("Deleted item is %d\n",*arr);
// arr[0] means *arr

while(j<range){
    *(arr+j) = *(arr+j+1);
    j++;
}

range--;

printf("Array after deletion of 1st element\n");

for(i=0;i<range;i++){
    printf("%d ",*(arr+i));
}

getch();
}