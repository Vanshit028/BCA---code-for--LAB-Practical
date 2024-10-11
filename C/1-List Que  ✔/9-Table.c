// Print table of a number
#include<stdio.h>
#include<conio.h>

void main(){

int num,i;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

if(num>0){
for(i=1;i<=10;i++){
    printf("%d X %d = %d\n",num,i,num*i);
}
}else{
    printf("Enter Positive Number");
}
getch();
}