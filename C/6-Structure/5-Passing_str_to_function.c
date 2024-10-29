// Passing Sructure to a function
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

void main(){
    void display(struct student);
    struct student S1;
    clrscr();


    printf("Enter the roll no ");
    scanf("%d",&S1.roll_no);
    fflush(stdin);
    printf("Enter the name ");
    gets(S1.name);
    printf("Enter the marks ");
    scanf("%f",&S1.marks);

    display(S1);
    getch();
}

void display(struct student S2){

    printf("\nName: %s",S2.name);
    printf("\nRoll No: %d",S2.roll_no);
    printf("\nMarks: %f ",S2.marks);
}

