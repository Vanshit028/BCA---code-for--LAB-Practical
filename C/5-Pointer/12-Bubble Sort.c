/* BUBBLE SORT in Dynamic Array */
#include<stdio.h>
#include<conio.h>

void main(){

int *arr, i, j, temp, range;
clrscr();
printf("Enter the number of elements ");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0; i<range; i++){
    printf("Enter the Number: ");
    scanf("%d",(arr+i));
}

for(i=0; i<range; i++){
    for(j=0; j<range-i-1; j++){
        if(*(arr+j)>*(arr+j+1)){
            temp=*(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=temp;
        }
    }
}


printf("The sorted array is\n");

for(i=0; i<range; i++){
    printf("%d\t",*(arr+i));
}

getch();
}