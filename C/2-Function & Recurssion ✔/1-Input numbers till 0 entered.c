#include<stdio.h>
// #include<conio.h>

int take_num_till_0(int);

void main(){

int num;
// clrscr();

printf("Enter the Number");
scanf("%d",&num);
printf("Entered number is %d\n",num);

while(num != 0){
    num = take_num_till_0(num);
    printf("Entered number is %d\n",num);
}

// getch();
}

int take_num_till_0(int num){
    
    printf("Enter the Number");
    scanf("%d",&num);
    
    return num;
}
