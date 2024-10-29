// Min Element in the Dynamic Array
#include<stdio.h>
#include<conio.h>

void main(){

int *arr,range,i,min;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",(arr+i));
}

min= *(arr+0);
for(i=1;i<range;i++){
    if(min>*(arr+i)){
        min=*(arr+i);
    }
}

printf("Minimum value is %d",min);

getch();
}