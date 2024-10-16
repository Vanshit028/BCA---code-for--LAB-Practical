// Input number untill 0 is Entered
#include<stdio.h>
#include<conio.h>

void take_num_till_0(int);

void main(){

int num;
clrscr();

printf("Enter the Number");
scanf("%d",&num);
printf("Entered number is %d\n",num);

    take_num_till_0(num);

getch();
}

void take_num_till_0(int num){
    
    while(num != 0){
        printf("Enter the Number");
        scanf("%d",&num);
        printf("Entered number is %d\n",num);
    }

}
