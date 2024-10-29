// Nested Sructure
#include<stdio.h>
#include<conio.h>

struct date{
    int dd, mm, yy;
};

struct student
{
    int roll_no;
    char name[50];
    struct date dob;
};

void main(){

struct student S1;
clrscr();

printf("Enter the roll no: ");
scanf("%d",&S1.roll_no);
fflush(stdin);
printf("Enter the name: ");
gets(S1.name);
printf("Enter the date of birth in dd, mm, yy formate: ");
scanf("%d %d %d", &S1.dob.dd, &S1.dob.mm, &S1.dob.yy);

printf("\nName: %s",S1.name);
printf("\nRoll No: %d",S1.roll_no);
printf("\nDate of Birth: %d %d %d",S1.dob.dd, S1.dob.mm, S1.dob.yy);

getch();
}