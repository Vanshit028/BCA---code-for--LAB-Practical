// Program to read an array of std names & print it in Alphabetically Order
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){

char str[10][100], temp[100];
int i, j, n;
clrscr();
printf("How many names ");
scanf("%d",&n);

for (i = 0; i < n; i++){
    fflush(stdin);
    printf("Enter the name: ");
    gets(str[i]);
}

for (i = 0; i < n; i++){
    for (j = 0; j < n-i-1; j++){
	if(strcmp(str[j],str[j+1]) > 0){
	    strcpy(temp,str[j]);
	    strcpy(str[j],str[j+1]);
	    strcpy(str[j+1],temp);
	}
    }
}

printf("Various names in Alphabetically Order \n");

for(i=0; i<n; i++){
    printf("%s\n",str[i]);
}

getch();
}