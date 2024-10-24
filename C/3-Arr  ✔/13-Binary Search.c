/* binary search */
#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],i,range,mid,beg,end,item;
clrscr();

printf("Enter the number of elements ");
scanf("%d",&range);

/*  Input an array */
for(i=0; i<range; i++){
    printf("Enter the Number: ");
    scanf("%d",&arr[i]);
}

printf("Enter element to be searched: ");
scanf("%d",&item);
beg=0;
end=range-1;
mid=(beg+end)/2;

while(beg<=end && arr[mid]!=item){
    if(item<arr[mid]){
        end=mid-1;
    }else{
        beg=mid+1;
    }
    mid=(beg+end)/2;
}

if(beg>end)
    printf("Element not found");

if(arr[mid]==item)
    printf("Element is found at location: %d",mid);

getch();
}