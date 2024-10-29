// Delete Kth Element in the Dynamic Array
#include<stdio.h>
#include<conio.h>

void main(){

int *arr,range,i,j,delete_pos;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

printf("Enter the delete position");
scanf("%d",&delete_pos);

arr = (int *)malloc(range*sizeof(int));

for(i=0;i<range;i++){
    printf("Enter the number ");
    scanf("%d",(arr+i));
}

printf("Deleted item is %d\n",*(arr+(delete_pos-1)));

j=delete_pos-1;
while(j<range){
    *(arr+j) = *(arr+j+1);
    j++;
}

range--;

printf("Array after deletion\n");
for(i=0;i<range;i++){
    printf("%d ",*(arr+i));
}

getch();
}