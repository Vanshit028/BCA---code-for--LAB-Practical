// Array with in a Sructure
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    int marks[5];
    char name[50];
    int total;
};

void main(){

struct student S1;
int i;
clrscr();
printf("Enter the roll no ");
scanf("%d",&S1.roll_no);
fflush(stdin);
printf("Enter the name ");
gets(S1.name);

S1.total = 0;
for (i = 1; i <= 5; i++){
    printf("Enter the marks ");
    scanf("%d",&S1.marks[i]);
    S1.total += S1.marks[i];
}

printf("\nName: %s",S1.name);
printf("\nRoll No: %d",S1.roll_no);
printf("\nMarks: ");
for (i = 1; i <= 5; i++){
    printf("%d ",S1.marks[i]);
}
printf("\n\nTotal Marks are %d", S1.total);


getch();
}