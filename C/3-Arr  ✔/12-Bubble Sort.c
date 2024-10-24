/* BUBBLE SORT */
#include<stdio.h>
#include<conio.h>

void main(){

int a[100], i, j, temp, range;
clrscr();
printf("Enter the number of elements ");
scanf("%d",&range);

for(i=0; i<range; i++){
    printf("Enter the Number: ");
    scanf("%d",&a[i]);
}

for(i=0; i<range; i++){
    for(j=0; j<range-i-1; j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}


printf("The sorted array is\n");

for(i=0; i<range; i++){
    printf("%d\t",a[i]);
}

getch();
}