// Union of students data
#include<stdio.h>
#include<conio.h>

union student
{
    int roll_no;
    float marks;
    char name[50];
};


void main(){

union student S1;
clrscr();

printf("Enter the roll no ");
scanf("%d",&S1.roll_no);
printf("Enter the marks ");
scanf("%f",&S1.marks);

fflush(stdin);
printf("Enter the name ");
gets(S1.name);


printf("\nName: %s",S1.name);
printf("\nRoll No: %d",S1.roll_no);
printf("\nMarks: %f",S1.marks);

getch();
}