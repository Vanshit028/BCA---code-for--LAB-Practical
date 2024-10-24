// Sort an array elements in ascending order (Selection Sort)
#include<stdio.h>
#include<conio.h>

void main(){

int arr[100], range, i, j, k, min, temp;
clrscr();
printf("How many elements ");
scanf("%d",&range);

for(i=0; i<range; i++){
    printf("Enter the Number");
    scanf("%d",&arr[i]);
}

for(i=0; i<range-1; i++){
    min = a[i];
    j=i;
    for(k=i+1; k<n; k++){
        if(min > a[k]){
            min = a[k];
            j = k;
        }
    }

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

printf("Sorted Array is n");
for(i=0; i<range; i++){
    printf("%d,"arr[i]);
}

getch();
}