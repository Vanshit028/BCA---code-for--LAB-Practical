// Search element in Dynamic Array (Linear Search)
#include<stdio.h>
#include<conio.h>

void main(){

int *arr, num_find, range, i;
clrscr();
printf("How many elements ");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0; i<range; i++){
    printf("Enter the Number ");
    scanf("%d",(arr+i));
}

printf("Enter the number to find ");
scanf("%d",&num_find);

for (i = 0; i < range; i++){
    if(*(arr+i) == num_find){
	printf("%d is found at the %d poistion", num_find, i+1);
	exit();
    }
}

if(i==range){
    printf("Number not found");
}
getch();
}