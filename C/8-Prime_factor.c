// Find Prime Factors of a number
#include<stdio.h>
#include<conio.h>

void main(){

int num,i,j,count=0,overal_checker=0;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

for(i=2;i<num;i++){
    if(num%i==0){
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d is the prime factor of %d\n",i,num);
            count=0;
            overal_checker++;
        }
    }
}

if(overal_checker==0){
    printf("%d has no prime factor\n",num);
}

getch();
}