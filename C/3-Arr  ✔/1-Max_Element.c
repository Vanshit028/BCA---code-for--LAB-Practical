// Max Element in the Array
#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,max;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",&arr[i]);
}

max=arr[0];
for(i=1;i<range;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}

printf("Maximum value is %d",max);

getch();
}