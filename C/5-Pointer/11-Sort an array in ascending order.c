// Sort an Dynamic Array elements in ascending order (Selection Sort)
#include<stdio.h>
#include<conio.h>

void main(){

int *arr, range, i, j, k, min, temp;
clrscr();
printf("How many elements ");
scanf("%d",&range);
arr = (int *)malloc(range*sizeof(int));

for(i=0; i<range; i++){
    printf("Enter the Number");
    scanf("%d",(arr+i));
}

for(i=0; i<range-1; i++){
    min = *(arr+i);
    j=i;
    for(k=i+1; k<range; k++){
        if(min > *(arr+k)){
            min = *(arr+k);
            j = k;
        }
    }

    temp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = temp;
}

printf("Sorted Array is \n");
for(i=0; i<range; i++){
    printf("%d\t",*(arr+i));
}

getch();
}