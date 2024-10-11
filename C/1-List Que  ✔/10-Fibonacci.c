// Print fibonacci series 
#include<stdio.h>
#include<conio.h>

void main(){
long int fibonacci;
int num,value1=0,value2=1,i;
clrscr();
printf("Enter the Number of terms");
scanf("%d",&num);

printf("Fibonacci Series below %d: %d %d ",num,value1,value2);

for(i=3;i<=num;i++){
fibonacci=value1+value2;
printf("%d ",fibonacci);
value1=value2;
value2 =fibonacci;
}

getch();
}
