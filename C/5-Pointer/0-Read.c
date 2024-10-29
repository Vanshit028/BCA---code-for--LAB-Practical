// Read and Print a Dynamic Array
#include<stdio.h>
#include<conio.h>

void main(){

int *arr,range,i,max;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",(arr+i));
}

for(i=0;i<range;i++){
    printf("%d\t",*(arr+i));
}

getch();
}