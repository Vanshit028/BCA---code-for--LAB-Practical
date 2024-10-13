#include<stdio.h>
#include<conio.h>

void main(){

int range, arr[100], i,j,k,min,max;
void printArr(int arr[], int range);
clrscr();

printf("Enter the number of items");
scanf("%d",&range);

for(i=0; i<range; i++){
printf("Enter the number");
scanf("%d",&arr[i]);
}

printf("Ascending Sorted Array\n");

for(i=0; i<range; i++){
min = arr[i];
j = i;
	for(k=i; k<range; k++){
	     if(min > arr[k]){
	     min = arr[k];
	     j = k;
	     }}
arr[j] = arr[i];
arr[i] = min;
}

printArr(arr, range);

printf("Descending Sorted Array\n");

for(i=0; i<range; i++){
max = arr[i];
j = i;
	for(k=i; k<range; k++){
	     if(max < arr[k]){
	     max = arr[k];
	     j = k;
	     }}
arr[j] = arr[i];
arr[i] = max;
}

printArr(arr, range);

getch();
}

void printArr(int arr[], int range){
int i=0;
	for(i=0; i<range; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}