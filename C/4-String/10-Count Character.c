#include<stdio.h>
#include<conio.h>

void main(){

int i, str[100], ch_count=0;
clrscr();
printf("Enter the String");
gets(str);

i=0;
while(str[i] != '\0'){    
    if((str[i] >= 65)||(str[i] <= 90)||(str[i] >= 97)||(str[i] <= 122))    ch_count++;
    
    i++;
}

printf("Number of character is %d",ch_count);
getch();
}