#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,max;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

max=arr[0];
for(i=1;i<range;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}

printf("Maximum value is %d",max);

getch();
}