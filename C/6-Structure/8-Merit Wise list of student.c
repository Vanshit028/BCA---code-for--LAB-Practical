// Merit Wise list of students
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    int marks;
    char name[50];
};

void main(){

struct student S[100],temp;
int i,j,n;
clrscr();
printf("How many students: ");
scanf("%d",&n);

for (i = 0; i < n; i++){
    printf("Enter the roll no ");
    scanf("%d",&S[i].roll_no);
    printf("Enter the marks ");
    scanf("%d",&S[i].marks);

    fflush(stdin);
    printf("Enter the name ");
    gets(S[i].name);
}

for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++){
	if(S[j].marks < S[j+1].marks){
	    temp = S[j];
	    S[j] = S[j+1];
	    S[j+1] = temp;
	}
    }
}

for (i = 0; i < n; i++){
    printf("\nName: %s",S[i].name);
    printf("\nRoll No: %d",S[i].roll_no);
    printf("\nMarks: %d",S[i].marks);
}

getch();
}


// LEFT