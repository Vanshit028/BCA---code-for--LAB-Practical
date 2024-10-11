#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,j,delete_position;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

printf("Enter the delete position");
scanf("%d",&delete_position);

printf("Deleted item is %d",arr[delete_position]);

j=delete_position-1;
while(j<range){
    arr[j] = arr[j+1];
    j++;
}

range--;

printf("Array after deletion/n")
for(i=0;i<range;i++){
    printf("%d ",arr[i]);
}

getch();
}