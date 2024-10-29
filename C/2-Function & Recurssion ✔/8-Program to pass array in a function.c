#include<stdio.h>
#include<conio.h>

void main(){
  int arr[100], n, i;
  void display(int[], int);
  clrscr();
  printf("Enter the number of items: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
     printf("Enter the number: ");
     scanf("%d", &arr[i]);
  }

  display(arr, n);
  getch();

}

  void display(int b[], int n){
     int i;
     printf("Array is \n");
     for(i=0; i<n; i++){
       printf("%d\t", b[i]);
     }


}
