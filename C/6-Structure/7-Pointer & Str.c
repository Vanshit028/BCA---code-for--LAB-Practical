// Structure with a pointer
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    float marks;
    char name[50];
};


void main(){

struct student *S1;
struct student S2;
clrscr();

printf("Enter the roll no ");
scanf("%d",&S2.roll_no);
printf("Enter the marks ");
scanf("%f",&S2.marks);

fflush(stdin);
printf("Enter the name ");
gets(S2.name);

S1 = &S2;

printf("\nName: %s",S1->name);
printf("\nRoll No: %d",S1->roll_no);
printf("\nMarks: %f",S1->marks);

getch();
}