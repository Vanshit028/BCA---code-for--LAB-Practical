// Returning Sructure from a function
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[50];
    int marks;
};

void main(){

struct student input();
struct student S;
clrscr();
S = input();

printf("\nName: %s",S.name);
printf("\nRoll No: %d",S.roll_no);
printf("\nMarks: %d",S.marks);

getch();
}

struct student input(){
    struct student S1;

    printf("Enter the roll no ");
    scanf("%d",&S1.roll_no);
    printf("Enter the marks ");
    scanf("%d",&S1.marks);

    fflush(stdin);
    printf("Enter the name ");
    gets(S1.name);

    return S1;
}
