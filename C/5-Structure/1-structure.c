#include<stdio.h>
// #include<conio.h>

struct student
{
    int roll_no;
    int marks;
    char name[50];
};


void main(){

struct student S1;
// clrscr();

printf("Enter the roll no ");
scanf("%d",&S1.roll_no);
printf("Enter the marks ");
scanf("%d",&S1.marks);

fflush(stdin);
printf("Enter the name ");
gets(S1.name);


printf("Name: %s",S1.name);
printf("Roll No: %d",S1.roll_no);
printf("Marks: %d",S1.marks);

// getch();
}