// Delete Last Element in the Array
#include<stdio.h>
#include<conio.h>

void main(){

int *arr,range,i,j;
clrscr();
printf("Enter the range of numbers ");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",(arr+i));
}

printf("Deleted item is %d\n",*(arr+(range-1)));

printf("Array after deletion of last element\n");
for(i=0;i < (range-1);i++){
    printf("%d ",*(arr+i));
}

getch();
}